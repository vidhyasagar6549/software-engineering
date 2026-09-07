/*Write a function in Java or Python that simulates a 
Flipkart-style search: overload a method searchProduct() to 
allow searching by product 
name or by product name and category. 
Demonstrate both usages with sample data.*/
#include <iostream>
#include <string>
using namespace std;

class Flipkart {
public:
    void searchProduct(string productName) {
        cout << "Searching for product: " << productName ;
    }
    void searchProduct(string productName, string category) {
        cout << "Searching for " << productName
             << " in category: " << category ;
    }
};
main() {
    Flipkart f;
    f.searchProduct("iPhone 15");
    f.searchProduct("iPhone 15", "Mobiles");

    
}
