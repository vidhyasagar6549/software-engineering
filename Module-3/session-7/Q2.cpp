#include <iostream>
#include <fstream>
#include <string>
using namespace std;

main() {

    ifstream file("my_fav_songs.txt", ios::in);

    string song;

    while (getline(file, song)) {
        cout <<song<<"\n";
    }

    file.close();

   
}
