#include <stdio.h>
#include <string.h>

 main() {
    char name[100], username[100];

    printf("Enter your full name: ");
    scanf("%s", name);

    if (strlen(name) < 5)
        strcpy(username, name);
    else {
        name[5] = '\0';
        strcpy(username, name);
    }

    printf("Generated username: %s", username);

     
}
