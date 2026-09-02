#include<iostream>
#include<string.h>
using namespace std;
class SocialMediaUser{
	public:
	string username;
	int followers;
	void displayProfile(){
		cout<<"\n username:- "<<username;
		cout<<"\n followers:- "<<followers;
	}
};
main(){
	SocialMediaUser s;
	s.username="sagar";
	s.followers=1000;
	s.displayProfile();
}
