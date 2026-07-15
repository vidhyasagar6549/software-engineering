#include<stdio.h>
main(){
	int num;
	printf("\n enter num =");
	scanf("%d",&num);
	if(num % 2 == 0){
		printf("\n number is even");
	}
	else{
		printf("\n number is odd");	
	}
}