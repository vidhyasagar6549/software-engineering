#include<stdio.h>
main()
{
	int age,order;
	printf("\n enter the age and order");
	scanf("%d %d",&age,&order);
	if(age > 18 && order > 500){
		printf("\n the user is eligible");
	}
	else{
		printf("\n the user is not eligible");
	}
}