#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
class Content{
	public:
	string title;
	string platform;
	int views;
	string status;	
	
	void display() {
        cout << "Title    : " << title;
        cout << "\n Platform : " << platform;
        cout << "\n Views    : " << views;
        cout << "\n Status   : " << status;
    }
    void save() {
    ofstream file("content_list.txt", ios::app);

    file << title << endl;
    file << platform << endl;
    file << views << endl;
    file << status << endl;

    file.close();

    cout << "\nContent added successfully!\n";
}
};
main(){
	Content c;
	c.title="C++Tutorial";
	c.platform="Youtube";
	c.views=5000;
	c.status="Published";
	c.display();
	c.save();
}

