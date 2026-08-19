#include <iostream>
using namespace std;

class Task {
public:
    string title;
    bool done;

    Task() {
        title = "";
        done = false;
    }

    Task(string t) {
        title = t;
        done = false;
    }
};

class TaskList {
private:
    Task tasks[100];
    int count;

public:
    TaskList() {
        count = 0;
    }

    void addTask(string title) {
        tasks[count] = Task(title);
        count++;
    }

    void markTaskDone(int index) {
        if (index >= 0 && index < count) {
            tasks[index].done = true;
        }
    }

    void showTasks() {
        for (int i = 0; i < count; i++) {
            cout << i << ". " << tasks[i].title;

            if (tasks[i].done)
                cout << " - Done";
            else
                cout << " - Pending";

            cout << endl;
        }
    }
};

int main() {
    TaskList list;

    list.addTask("Complete homework");
    list.addTask("Read a book");
    list.addTask("Go for a walk");

    list.markTaskDone(1);

    list.showTasks();

    return 0;
}


