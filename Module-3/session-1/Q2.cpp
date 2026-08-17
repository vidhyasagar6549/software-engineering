#include <iostream>
#include <cstring>
using namespace std;

char task[5][50];

void markTaskDone(int index)
{
    cout << "Enter the index: ";
    cin >> index;

    strcat(task[index - 1], " - DONE");
}

 main()
{
    int i, index;

    for(i = 0; i < 5; i++)
    {
        cout << "Enter your task: ";
        cin >> task[i];
    }
cout <<"\n";
    markTaskDone(index);

    cout << "\nUpdated Task List:\n";

    for(i = 0; i < 5; i++)
    {
        cout << "Task " << i + 1 << ": " << task[i] << endl;
    }

    
}
