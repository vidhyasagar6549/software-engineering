#include<iostream>
#include<string>
using namespace std;
class playlist{
	public:
	string name;
	string Createdon;
	bool isPublic;
	
	void togglePublic(){
		isPublic = !isPublic;
	}
};
main(){
	playlist p1;
	p1.name ="mind";
	p1.Createdon="23-03-2005";
	p1.isPublic=true;
	cout<<"name of song:-"<<p1.name;
	cout<<"\n Createdon :-"<<p1.Createdon<<"\n";
	cout<<"it is public befor toggle :-"<<p1.isPublic;
	
	p1.togglePublic();
	cout<<"\n After 1st toggle"<<p1.isPublic;
	
	p1.togglePublic();
	cout<<"\n After 2st toggle"<<p1.isPublic;
}
