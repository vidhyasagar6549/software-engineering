#include<stdio.h>
main(){
	int item_price,quantity,total_amt;
	printf("\ Enter the item_price quantity =");
	scanf("%d %d",&item_price,&quantity);
	total_amt = item_price * quantity;
	printf("\n the total bill amount is=%d",total_amt);
	
}