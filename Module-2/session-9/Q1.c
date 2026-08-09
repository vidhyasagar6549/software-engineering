#include <stdio.h>

main() {
    int dailySteps[7] = {5000, 6500, 7000, 4500, 8000, 9000, 7500};

    for (int i = 0; i < 7; i++) {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }

  
}
