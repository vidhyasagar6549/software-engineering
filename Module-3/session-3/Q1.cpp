#include<iostream>
#include <string>
using namespace std;
class Playlist{
	public:
		string name;
	Playlist(){
		name = "MyFavourites";
		cout<<"\n Welcome to your playlist!";
	}

	
};
main(){
	Playlist f1;
	cout<<"\n Playlist name:- "<<f1.name;
}
