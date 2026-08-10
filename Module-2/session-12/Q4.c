#include <stdio.h>

struct InstaProfile {
    char username[50];
    int followers;

    struct Bio {
        char description[100];
        int age;
    } bio;
};

 main() {
    struct InstaProfile profile = {
        "vidhya_123",
        1500,
        {"C Programming Learner", 22}
    };

    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Description: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);

    
}
