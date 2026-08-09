#include <stdio.h>

void getUserInitials(char name[])
{
    printf("%c%c", name[0], name[6]);
}

main()
{
    char name[] = "Virat Kohli";

    printf("Initials: ");
    getUserInitials(name);

    
}
