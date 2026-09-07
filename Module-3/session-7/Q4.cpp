#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    string product;
    int price;
    ofstream file("wishlist.txt");

    for (int i = 1; i <= 3; i++) {

        cout << "Enter product and price: ";
        cin >> product >> price;

        file << product << " " << price << endl;
    }
    file.close();
    ifstream readFile("wishlist.txt");
	cout << "\nWishlist:\n";

    while (readFile >> product >> price) {
        cout << "Product: " << product
             << " | Price: Rs. " << price << endl;
    }
    readFile.close();
}
