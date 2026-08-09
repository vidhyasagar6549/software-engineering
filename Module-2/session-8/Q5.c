#include <stdio.h>
#include <ctype.h>

void capitalizes(char user[30]) {
    printf("\nEnter the user: ");
    scanf("%s", user);

    user[0] = toupper(user[0]);

    printf("Result: %s", user);
}
void capitalize(char product[30]) {
    printf("\nEnter the product: ");
    scanf("%s", product);

    product[0] = toupper(product[0]);

    printf("Result: %s", product);
}

int main() {
    char user[30];

    capitalizes(user);
 	char product[30];

    capitalize(product);
    return 0;
}
