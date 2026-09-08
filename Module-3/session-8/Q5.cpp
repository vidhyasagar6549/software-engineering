#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;
};

int main()
{
    ifstream file("content_list.txt");

    vector<Content> list;
    Content c;

    while(getline(file, c.title))
    {
        getline(file, c.platform);

        string v;
        getline(file, v);
        c.views = stoi(v);

        getline(file, c.status);

        list.push_back(c);
    }

    file.close();

    // Display list
    for(int i = 0; i < list.size(); i++)
    {
        cout << "\n" << i + 1 << ". "
             << list[i].title
             << " | " << list[i].platform
             << " | " << list[i].status << endl;
    }

    int choice;
    cout << "\nEnter content number to delete: ";
    cin >> choice;

    if(choice >= 1 && choice <= list.size())
    {
        list.erase(list.begin() + choice - 1);

        // Overwrite file
        ofstream out("content_list.txt");

        for(int i = 0; i < list.size(); i++)
        {
            out << list[i].title << endl;
            out << list[i].platform << endl;
            out << list[i].views << endl;
            out << list[i].status << endl;
        }

        out.close();

        cout << "\nContent deleted successfully!\n";

        // Display updated list
        cout << "\nUpdated Content List:\n";

        for(int i = 0; i < list.size(); i++)
        {
            cout << i + 1 << ". "
                 << list[i].title
                 << " | " << list[i].platform
                 << " | " << list[i].status << endl;
        }
    }
    else
    {
        cout << "\nInvalid number!";
    }

    return 0;
}
