#include<stdio.h>
main(){
	int n,rem,rev=0,temp;
		printf("\n Enter the digit number ");
		scanf("%d",&n);
		temp=n;
		while(n > 0){
			rem=n%10;
			rev=rev*10+rem;
			n=n/10;
		}  
		
	if( temp == rev)
	{
		printf("\n the number is palindrom number ");
	}
	else
	{
		printf("\n the number is not palindrom number ");
	}
}
