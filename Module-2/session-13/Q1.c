#include <stdio.h>

 main() {
    FILE *fp;

    fp = fopen("playlist.txt", "w");

    fprintf(fp, "Perfect\n");
    fprintf(fp, "Shape of You\n");
    fprintf(fp, "Blinding Lights\n");

    fclose(fp);

    printf("Songs written to playlist.txt successfully.");

    
}
