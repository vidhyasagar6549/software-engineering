#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("content_list.txt");

    string title, platform, status;
    int no = 1;

    while (file >> title >> platform >> status)
    {
        cout << no << ". ";
        cout << "Title: " << title;
        cout << " | Platform: " << platform;
        cout << " | Status: " << status << endl;

        no++;
    }

    file.close();

    return 0;
}
