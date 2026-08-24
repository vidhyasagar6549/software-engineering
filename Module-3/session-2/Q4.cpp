#include <iostream>
#include <string>
using namespace std;

class Playlist
{
public:
    string name;
    int songCount;
    bool isPublic;
    string song[20];

    Playlist()
    {
        songCount = 0;
    }

    void addSong(string songTitle)
    {
        song[songCount] = songTitle;
        songCount++;
    }

    void displaySongs()
    {
        cout << "\nThe songs are:\n";

        for(int i = 0; i < songCount; i++)
        {
            cout << i + 1 << ". " << song[i] << endl;
        }
    }
};

int main()
{
    Playlist p1;

    p1.name = "Mind";
    p1.isPublic = true;

    p1.addSong("Believer");
    p1.addSong("Perfect");
    p1.addSong("Shape of You");

    p1.displaySongs();

    return 0;
}
