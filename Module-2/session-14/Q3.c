#include <stdio.h>

void formatFollowersCount(int count) {

    if (count >= 100000) {
        printf("%dm", count / 100000);
    }
    else if (count >= 1000) {
        printf("%dk", count / 1000);
    }
    else {
        printf("%d", count);
    }
}

main() {

    formatFollowersCount(5000000);
}
