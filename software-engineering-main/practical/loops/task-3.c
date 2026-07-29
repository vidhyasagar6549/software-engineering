#include<stdio.h>
main(){
	int num,rem,max=0;
	printf("Enter your number=");
	scanf("%d",&num);
	while(num != 0)
	{
		rem=num%10;
		if(rem > max)
			max=rem;
			num = num / 10;
	}
	printf("\n the max num=%d",max);
}
