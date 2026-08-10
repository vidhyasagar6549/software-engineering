#include <stdio.h>

 main() {
    int minutes[7] = {0};
    int choice, i;
    int total, highest;
    float average;
    char confirm;
    FILE *file;

    do {
        printf("\n===== MUSIC LISTENING LOGGER =====\n");
        printf("1. Log Music Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Weekly Report\n");
        printf("4. Reset Data\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                // Enter listening minutes for each day
                for (i = 0; i < 7; i++) {
                    printf("Enter minutes for Day %d: ", i + 1);
                    scanf("%d", &minutes[i]);
                }

                // Save data in file
                file = fopen("music_log.txt", "w");

                for (i = 0; i < 7; i++) {
                    fprintf(file, "%d\n", minutes[i]);
                }

                fclose(file);

                printf("Data saved successfully!\n");
                break;

            case 2:
                printf("\nWeekly Summary:\n");

                file = fopen("music_log.txt", "r");

                if (file == NULL) {
                    printf("No data found.\n");
                } else {
                    for (i = 0; i < 7; i++) {
                        fscanf(file, "%d", &minutes[i]);
                        printf("Day %d: %d minutes\n",
                               i + 1, minutes[i]);
                    }

                    fclose(file);
                }
                break;

            case 3:
                file = fopen("music_log.txt", "r");

                if (file == NULL) {
                    printf("No data found.\n");
                } else {
                    total = 0;
                    highest = 0;

                    // Read data and calculate total and highest
                    for (i = 0; i < 7; i++) {
                        fscanf(file, "%d", &minutes[i]);

                        total = total + minutes[i];

                        if (minutes[i] > highest) {
                            highest = minutes[i];
                        }
                    }

                    fclose(file);

                    average = total / 7.0;

                    printf("\nTotal: %d minutes\n", total);
                    printf("Average: %.2f minutes\n", average);
                    printf("Highest: %d minutes\n", highest);
                }
                break;

            case 4:
                printf("Are you sure? (Y/N): ");
                scanf(" %c", &confirm);

                if (confirm == 'Y' || confirm == 'y') {

                    // Clear array
                    for (i = 0; i < 7; i++) {
                        minutes[i] = 0;
                    }

                    // Clear file
                    file = fopen("music_log.txt", "w");
                    fclose(file);

                    printf("Data reset successfully!\n");
                } else {
                    printf("Reset cancelled.\n");
                }
                break;

            case 5:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 5);

  
}
