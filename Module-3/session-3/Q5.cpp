#include<iostream>
#include <string>
#include <fstream>
using namespace std;
class Playlist{
	public:
		string name;
	Playlist(){
		name = "MyFavourites";
		cout<<"\n Welcome to your playlist!";
	}
	~Playlist(){
		ofstream file("autosave.txt", ios::app);
			 cout << "Saving playlist...";
		}
	
};
main(){
	Playlist f1;
	cout<<"\n Playlist name:- "<<f1.name;
	Playlist *f2= new Playlist();
	cout << "Playlist saved successfully!" << endl;
	delete f2;
}
