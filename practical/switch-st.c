#include<stdio.h>

main()
{
    int r, l, b, h, base, ch;
    float pi = 3.14;

    printf("\nPress 1 for Area of Circle");
    printf("\nPress 2 for Area of Rectangle");
    printf("\nPress 3 for Area of Triangle");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            printf("\nEnter radius: ");
            scanf("%d", &r);
            printf("\nArea of Circle =%f", pi * r * r);
            break;

        case 2:
            printf("\nEnter length and breadth: ");
            scanf("%d %d", &l, &b);
            printf("\nArea of Rectangle = %d", l * b);
            break;

        case 3:
            printf("\nEnter height and base: ");
            scanf("%d %d", &h, &base);
            printf("\nArea of Triangle = %f", 0.5 * h * base);
            break;

        default:
            printf("\nWrong Choice");
            break;
    }
}