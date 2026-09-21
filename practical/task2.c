#include<stdio.h>
main(){
	int n,rem,sum=0,temp;
		printf("\n Enter the digit number ");
		scanf("%d",&n);
		temp=n;
		while(n > 0){
			rem=n%10;
			sum=sum+rem*rem*rem;
			n=n/10;
		}  
		
		
	if( temp == sum)
	{
		printf("\n the number is armstrong number ");
	}
	else
	{
		printf("\n the number is not armstrong number ");
	}
}
