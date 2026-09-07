#include <iostream>
#include <fstream>
using namespace std;

 main() {

    ofstream file("my_fav_songs.txt");

    file << "Perfect" ;
    file << "Shape of You"; 
    file << "Believer" ;
    file << "Blinding Lights" ;
    file << "Faded";

    file.close();

    cout << "Songs written to file successfully.";
}
