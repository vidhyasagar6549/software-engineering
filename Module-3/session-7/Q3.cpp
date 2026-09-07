#include<iostream>
#include<fstream>
using namespace std;
main(){
	ofstream f1;
	char data[100];
	f1.open("my_fav_songs.txt",ios::app);
	f1<<"\n tera saath";
	f1.close();
	
	ifstream f2;
	f2.open("my_fav_songs.txt",ios::in);
	while(f2.getline(data,100)){
		cout<<data;
		cout<<"\n";
	}
	cout<<data;
	f2.close();
}
