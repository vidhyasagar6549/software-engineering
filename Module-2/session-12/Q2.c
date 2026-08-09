#include <stdio.h>

struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

 main() {
    struct FoodItem menu[3] = {
        {"Paneer Tikka", 180.0, 4.5},
        {"Veg Biryani", 150.0, 4.3},
        {"Masala Dosa", 100.0, 4.6}
    };

    for (int i = 0; i < 3; i++) {
        printf("Item: %s\n", menu[i].itemName);
        printf("Price: %.2f\n", menu[i].price);
        printf("Rating: %.1f\n\n", menu[i].rating);
    }

    
}
