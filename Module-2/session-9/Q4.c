#include <stdio.h>

 main() {
 	int i;
    int cricketScores[3][2] = {
        {180, 175},
        {210, 190},
        {165, 200}
    };

    for (i = 0; i < 3; i++) {
        if (cricketScores[i][0] > cricketScores[i][1])
            printf("Match %d highest score = %d\n", i + 1, cricketScores[i][0]);
        else
            printf("Match %d highest score = %d\n", i + 1, cricketScores[i][1]);
    }

    
}
