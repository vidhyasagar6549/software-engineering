#include <stdio.h>
#include <string.h>
#include <ctype.h>

 main() {
    FILE *fp;
    char song[100];
    char lower[100];
    int i;

    fp = fopen("playlist.txt", "r");

    while (fgets(song, sizeof(song), fp) != NULL) {

        for (i = 0; song[i] != '\0'; i++) {
            lower[i] = tolower(song[i]);
        }
        lower[i] = '\0';

        if (strstr(lower, "love") != NULL) {
            printf("%s", song);
        }
    }

    fclose(fp);

    
}
