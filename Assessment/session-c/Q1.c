#include <stdio.h>

struct StudyLog {
    char subject[40];
    float hours[7];
};

void report(struct StudyLog s[], int n) {
	int i,j,k;
    for ( i = 0; i < n; i++) {
        float total = 0;

        printf("\nSubject: %s\n", s[i].subject);

        for ( j = 0; j < 7; j++) {
            total = total + s[i].hours[j];

            printf("Day %d: ", j + 1);

            for ( k = 0; k < (int)s[i].hours[j]; k++) {
                printf(".");
            }

            printf(" %.1f hours\n", s[i].hours[j]);
        }

        printf("Weekly Total: %.1f hours\n", total);
        printf("Daily Average: %.2f hours\n", total / 7);
    }
}

int main() {
	int i,j;
    struct StudyLog s[3] = {
        {"Math", {0, 0, 0, 0, 0, 0, 0}},
        {"Science", {0, 0, 0, 0, 0, 0, 0}},
        {"English", {0, 0, 0, 0, 0, 0, 0}}
    };

    int choice, subject, day;
    FILE *fp;

    do {
        printf("\n1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nSubjects:\n");
            printf("1. Math\n");
            printf("2. Science\n");
            printf("3. English\n");

            printf("Choose subject: ");
            scanf("%d", &subject);

            printf("Enter today's day (1-7): ");
            scanf("%d", &day);

            printf("Enter study hours: ");
            scanf("%f", &s[subject - 1].hours[day - 1]);

            printf("Study hours saved.\n");
        }

        else if (choice == 2) {
            report(s, 3);
        }

        else if (choice == 3) {
            fp = fopen("productivity_log.txt", "w");

            for ( i = 0; i < 3; i++) {
                fprintf(fp, "%s", s[i].subject);

                for ( j = 0; j < 7; j++) {
                    fprintf(fp, ",%.1f", s[i].hours[j]);
                }

                fprintf(fp, "\n");
            }

            fclose(fp);
            printf("Data saved successfully.\n");
        }

        else {
            printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}
