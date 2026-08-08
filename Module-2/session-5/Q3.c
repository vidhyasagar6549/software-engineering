#include<stdio.h>
main(){
	int cartAmount,FinalAmount,dis;
	
		printf("\n enter the cart amount");
		scanf("%d",&cartAmount);
		
		if(cartAmount > 2000){
			dis= cartAmount*.20;
			printf("\n The discount amount is %d",dis);
			FinalAmount=cartAmount-dis;
			printf("\n the final amount to pay is %d",FinalAmount);
		}else {
		if(cartAmount > 1000){
		
			dis= cartAmount*.10;
			printf("\n The discount amount is %d",dis);
			FinalAmount=cartAmount-dis;
			printf("\n the final amount to pay is %d",FinalAmount);
	}
		else{
			printf("\n no discount");
		}
	}
	
		
}
	

