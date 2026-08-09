#include <stdio.h>

void calculateAverage(int dailyOrders[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum = sum + dailyOrders[i];
    }

    printf("Average weekly spend = %.2f", (float)sum / size);
}

 main() {
    int dailyOrders[7] = {250, 300, 150, 400, 200, 350, 250};

    calculateAverage(dailyOrders, 7);

    
}
