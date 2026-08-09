#include <stdio.h>

 main() {
    int likes = 1000;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Value of likes = %d\n", likes);
    printf("Address stored in ptrLikes = %p\n",*ptrLikes);

    
}
