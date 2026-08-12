#include <stdio.h>

int main()
{
    float per;

    printf("Enter your percentage: ");
    scanf("%f", &per);

    if (per < 0 || per > 100)
    {
        printf("Error: Percentage must be between 0 and 100.\n");
        return 0;
    }

    if (per >= 90)
    {
        printf("Grade: A\n");
        printf("Excellent work!\n");
    }
    else if (per >= 75)
    {
        printf("Grade: B\n");
        printf("Good work! Keep pushing.\n");
    }
    else if (per >= 60)
    {
        printf("Grade: C\n");
        printf("Good effort! Keep improving.\n");
    }
    else if (per >= 45)
    {
        printf("Grade: D\n");
        printf("Keep practicing and improving.\n");
    }
    else
    {
        printf("Grade: F\n");
        printf("Needs improvement. Don't give up!\n");
    }

    return 0;
}
