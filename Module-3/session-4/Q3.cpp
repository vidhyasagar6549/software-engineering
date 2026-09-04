/*Create a Podcaster class that also inherits from SocialMediaUser and adds a 
property podcastName and a method publishEpisode(episodeTitle) 
that prints 'Episode [episodeTitle] published on [podcastName]'.*/
#include<iostream>
#include<string.h>
using namespace std;
class SocialMediaUser{
	public:
	string username;
	string email;
	int followers;
	void displayProfile(){
		cout<<"\n username:- "<<username;
		cout<<"\n email:-"<<email;
		cout<<"\n followers:- "<<followers;
	}
};
class Podcaster : public SocialMediaUser {
	public:
		string podcastName;
		void publishEpisode(string episodeTitle){
			cout<<"\n Episode :-"<< episodeTitle
				<<"\n published on :- "<< podcastName;
		}
		
};
using namespace std;
main(){
	Podcaster p1;
	p1.	username="sagar";
	p1.email="sagar@gamil.com";
	p1.followers=6000;
	p1.displayProfile();
	
	p1.podcastName="tech talks";
	p1.publishEpisode("Introduxtion to AI");
}
