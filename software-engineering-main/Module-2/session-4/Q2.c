#include<stdio.h>
main(){
	float p_price,dis,finalprice;
	int member;
	printf("\n Enter the price and dis");
	scanf("%f %f",&p_price,&dis);
	
	printf("\n Enter Are you member or not(1=yes,0=no)");
	scanf("%d",&member);
	
	finalprice =p_price-(p_price*dis/100) ;
	
	if(member && 1)
	{
		finalprice = finalprice-(p_price*5/100 );
	}
	printf("\n he final price =%f",finalprice);
}