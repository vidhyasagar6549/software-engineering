/*Implement hierarchical inheritance by creating an 
InstagramInfluencer class that inherits from SocialMediaUser and adds a
 method postStory(storyTitle) which prints '[username] posted
  a new story: [storyTitle]'.<br><br><em><strong>Hint:</strong> Think about how
 SocialMediaUser is the parent for YouTuber, Podcaster, and InstagramInfluencer.</em>*/
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
class InstagramInfluencer : public SocialMediaUser{
	public:
		void postStory(string storyTitle){
			cout<<"\n"<<username<<" posted a new story "<<storyTitle;
		}
};
main(){
	InstagramInfluencer i;
	i.username="sagar";
	i.followers=10000;
	i.displayProfile();
	i.postStory("my new channel");
	
}
