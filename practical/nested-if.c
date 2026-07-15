#include<stdio.h>
main(){
	int maths,phy,chem,total,subtotal;
	printf("\n enter the marks of maths phy chem");
	scanf("%d %d %d",&maths,&phy,&chem);
	if(maths >=65 && phy >=55 && chem >=50){
		total= maths+phy+chem;
		subtotal = maths+phy;
		if(total >=190 || subtotal >=145){
		printf("\n eligible for admision");
		}
		else{
			printf("\n not eligible of admision inner");
		}
	}
	else{
	printf("\n not eligible of admision outer");
	}
}