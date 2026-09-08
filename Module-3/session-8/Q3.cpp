#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Content
{
public:
    string title;
    string platform;
    int views;
    string status;

    void display()
    {
        cout << "Title    : " << title;
        cout << "\nPlatform : " << platform;
        cout << "\nViews    : " << views;
        cout << "\nStatus   : " << status << endl;
    }
};

int main()
{
    ifstream file("content_list.txt");

    Content c;
    int no = 1;

    while(getline(file, c.title))
    {
        getline(file, c.platform);
        
        string v;
        getline(file, v);
        c.views = stoi(v);
        
        getline(file, c.status);

        cout << "\nContent " << no << endl;
        c.display();

        no++;
    }

    file.close();

    return 0;
}
