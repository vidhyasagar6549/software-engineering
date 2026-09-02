#include<iostream>
#include <string>
using namespace std;
class Movie  {
	public:
		string movieName;
    string director;
    float rating;
		
	Movie(string n,string p,float r){
		movieName=n;
		director=p;
		rating=r;
	}	
	Movie(const Movie &m){
		movieName=m.movieName;
		director=m.director;
		rating=m.rating;
	}	
	void displayinfo(){
		cout<<"\n the movieName is="<<movieName;
		cout<<"\n the director is="<<director;
		cout<<"\n the rating is="<<rating;
	}
	

	
};
main(){
	string movieName;
		string director;
		float rating;
		
		cout<<"\n Enter your movieName";
		cin>>movieName;
		cout<<"\n Enter your director";
		cin>>director;
		cout<<"\n Enter your rating";
		cin>>rating;
	Movie  m(movieName,director,rating);
	Movie m1(m);
	cout<<"original:-";
	m.displayinfo();
	cout<<"copy:-";
	m1.displayinfo();
	
}

	

