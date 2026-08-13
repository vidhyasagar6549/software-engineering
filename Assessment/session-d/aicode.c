#include <stdio.h>

int main() {
    int a[10];
    int max, min, sum = 0;
    float mean;
    
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    max = a[0];
    min = a[0];

    for (int i = 1; i < 10; i++) {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    mean = sum / 10;

    printf("\nMaximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Mean = %.2f\n", mean);

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted list: ");

    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    if (mean - min < max - mean)
        printf("Mean is closer to minimum.\n");
    else if (mean - min > max - mean)
        printf("Mean is closer to maximum.\n");
    else
        printf("Mean is exactly midway between minimum and maximum.\n");

    return 0;
}

