#include<stdio.h>
main(){
	char items={"Burger","pizza","fries"};
	int i;
	int prices[]={120,250,90};
	int total=0;
	for (i = 0; i <3; i++){
	 total += prices[i];
	 }
printf("Total price is: %d" , total);
}

