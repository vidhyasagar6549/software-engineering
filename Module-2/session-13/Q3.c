#include <stdio.h>

 main() {
    FILE *fp;

    fp = fopen("playlist.txt", "a");

    fprintf(fp, "Levitating\n");
    fprintf(fp, "Starboy\n");

    fclose(fp);

    printf("Two songs added successfully.");

    
}
