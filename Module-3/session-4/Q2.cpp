#include<iostream>
#include<string.h>
using namespace std;

class SocialMediaUser{
	public:
	string username;
	int followers;
	SocialMediaUser(string name,int f)
    {
        username = name;
        followers=f;
    }
};
class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    YouTuber(string name,int f, string channel)
        : SocialMediaUser(name,f)
    {
        channelName = channel;
    }

    void uploadVideo(string title)
    {
        cout << "Video title:-" << title << " \n uploaded to :-" << channelName << endl;
    }
};
main(){
 YouTuber y("Sagar",1000, "Sagar Gaming");
	y.uploadVideo("my first video");
}

