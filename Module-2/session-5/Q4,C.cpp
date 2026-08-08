#include<stdio.h>
main(){
	int age;
	printf("\n Enter your age");
	scanf("%d",&age);
	
	if(age > 18)
		{
			printf("\n Eligible for Driving License");
			
				if(age > 21)
					{
						printf("\n Eligible for Credit Card");
							
							if(age > 25)
								{	
									printf("\n Eligible for Car Rental");
								}	
								else
									{
										printf("\n not eligible");
									}
					}
						else
							{
								printf("\n not eligible");
							}
		}
		else
			{
				printf("\n not eligible");
			}
}
