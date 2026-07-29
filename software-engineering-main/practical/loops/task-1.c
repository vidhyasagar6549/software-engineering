#include<stdio.h>
main()
{
	int num,rem,rev=0;
	printf("\n enter num");
	scanf("%d",&num);
	while(num !=0){
		rem = num%10;
		rev= rev+rem;
		num = num/10;	
	}
	printf("\n rev=%d",rev);
}