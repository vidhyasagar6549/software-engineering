#include<stdio.h>
void addToCart(int *cart[],char *p_name){
	cart[2]=p_name;
}
main(){
	char *cart[3]={"milk","apple"};
	printf("\n %s %s",cart[0],cart[1]);
	addToCart(cart,"bread");
	printf("\n %s %s %s",cart[0],cart[1],cart[2]);
}
