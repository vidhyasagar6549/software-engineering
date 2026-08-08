#include<stdio.h>
//switch 
/*
   switch(choice)
   {
      case 1://block;
      case 2://block;
      case 3://block;
	}
*/
main(){
	int r,l,b,h,base,ch;
	float pi=3.14;
	printf("\n press 1 for find area of circle");
	printf("\n press 2 for find area of rectangle");
	printf("\n press 3 for find area of tringle");
	printf("\n Enter your choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("\n Enetr radius");
			scanf("%d",&r);
			printf("\n Are of circle=%f",(r*r*pi));
		break;
		case 2:
		    printf("\n Enter len & bre");
			scanf("%d %d",&l,&b);
			printf("\n area of rectangle=%d",(l*b));
		break;
		case 3:
			printf("\n Enter heignt and base");
			scanf("%d %d",&h,&base);
			printf("\n are of tringle=%f",(h*base*0.5));
		break;
		default:
		     printf("\n Wrong choice");
		break;	 	
				
	}
	
}
