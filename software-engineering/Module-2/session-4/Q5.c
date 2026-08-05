#include <stdio.h>

int main()
{
    int num=4,num1=5,n;
    n=++num;
    printf("\n pre-increment is=%d",num);
    n=num1++;
    
    printf("\n post-increment is=%d",num1);
    return 0;
}