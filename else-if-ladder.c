#include<stdio.h>
main(){
	int x1,x2;
	printf("enter the value of x1,x2=");
	scanf("%d %d",&x1,&x2);
	if(x1 > 0 && x2 > 0){
		printf("\n first");
	}
	else if(x1 < 0 && x2 > 0)
	{
		printf("\n second");
	}
	else if(x1 < 0 && x2 < 0)
	{
		printf("\n third");
	}
	else if(x1 > 0 && x2 < 0)
	{
		printf("\n forth");
	}
	else
	{
		printf("\n center line");
	}
}