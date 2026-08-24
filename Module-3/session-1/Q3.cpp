#include <iostream>
#include <cstring>
using namespace std;

class Task
{
public:
    char title[30];
    bool isDone;

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        cout << "Task: " << title;

        if (isDone)
            cout << " - DONE";
        else
            cout << " - NOT DONE";
    }
};

 main()
{
    Task t1;

    strcpy(t1.title, "play");
    t1.isDone = false;

    t1.markDone();
    t1.display();

   
}
