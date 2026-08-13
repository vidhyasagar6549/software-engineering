#include <stdio.h>

struct Expense {
    char category[30];
    float amount;
};

int main() {
    struct Expense e[10];
    int n = 0, choice,i;
    float total;
    FILE *fp;

    do {
        printf("\n1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (n < 10) {
                printf("Enter category: ");
                scanf("%s", e[n].category);

                printf("Enter amount: ");
                scanf("%f", &e[n].amount);

                n++;
            } else {
                printf("Maximum 10 expenses reached.\n");
            }
        }

        else if (choice == 2) {
            total = 0;

            printf("\nCategory\tAmount\n");

            for (i = 0; i < n; i++) {
                printf("%s\t\t%.2f\n", e[i].category, e[i].amount);
                total = total + e[i].amount;
            }

            printf("Total = %.2f\n", total);
        }

        else if (choice == 3) {
            fp = fopen("expenses.txt", "w");

            for ( i = 0; i < n; i++) {
                fprintf(fp, "%s,%.2f\n", e[i].category, e[i].amount);
            }

            fclose(fp);
            printf("Expenses saved.\n");
        }

        else {
            printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}
