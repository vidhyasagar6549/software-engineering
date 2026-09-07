#include <iostream>
#include <fstream>
using namespace std;

 main() {

    ofstream file("my_fav_songs.txt");

    file << "Perfect" << endl;
    file << "Shape of You" << endl;
    file << "Believer" << endl;
    file << "Blinding Lights" << endl;
    file << "Faded" << endl;

    file.close();

    cout << "Songs written to file successfully.";
}
