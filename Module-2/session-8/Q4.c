#include <stdio.h>

void formatprice(int price[3]) {
    int i;

    for(i = 0; i < 3; i++) {
        printf("\nEnter the price: ");
        scanf("%d", &price[i]);
    }
    for(i = 0; i < 3; i++) {
        printf("\nRs%d", price[i]);
    }

}

int main() {
    int price[3];

    formatprice(price);

    return 0;
}
