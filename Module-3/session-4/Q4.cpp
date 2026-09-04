#include <iostream>
#include <string>
using namespace std;

class SocialMediaUser
{
public:
    string username;
};
class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    void display()
    {
        cout << "Username: " << username << endl;
        cout << "Channel Name: " << channelName << endl;
    }
};

class GamingYouTuber : public YouTuber
{
public:

    void streamGame(string gameName)
    {
        cout << username << " is now streaming "
             << gameName << " on " << channelName;
    }
};

 main()
{
    GamingYouTuber g;

    g.username = "sagar";
    g.channelName = "sagargaming";

    g.display();

    cout << endl;

    g.streamGame("Free Fire");

    
}
