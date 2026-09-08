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
    cout << "\nEnter content number: ";
    cin >> choice;

    if(choice >= 1 && choice <= list.size())
    {
        cout << "Enter new status: ";
        cin >> list[choice - 1].status;

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

        cout << "\nStatus updated successfully!";
    }
    else
    {
        cout << "\nInvalid number!";
    }

    return 0;
}
