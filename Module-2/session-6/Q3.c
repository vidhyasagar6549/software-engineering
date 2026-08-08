#include <stdio.h>

main()
{
    int choice;
    int guess;

    printf("Guess the Song\n");
    printf("1. Kesariya\n");
    printf("2. Apna Bana Le\n");
    printf("3. Tum Hi Ho\n");

    choice = 2;

    do
    {,
        printf("\nEnter your guess (1-3): ");
        scanf("%d", &guess);

        if (guess == choice)
        {
            printf("Correct! You guessed the song.\n");
        }
        else
        {
            printf("Wrong! Try again.\n");
        }

    } while (guess != choice);

}
