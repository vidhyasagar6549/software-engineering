#include<stdio.h>
main(){
	int n,rev,temp=0,s,pal;
		printf("\n Enter the 3-digit number ");
		scanf("%d",&n);
	rev=n%10;
	temp=temp*10+rev;
	s=n/10;

	if( temp == n)
	{
		printf("\n the number is palindrom number ");
	}
	else
	{
		printf("\n the number is not palindrom number ");
	}
}
