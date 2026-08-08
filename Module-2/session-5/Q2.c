#include<stdio.h>
main(){
	int choice;
	printf("\n Zomato-style food suggestion tool");
	printf("\n 1.breafast");
	printf("\n 2.lunch");
	printf("\n 3.dinner");
	printf("\n 4.snack");
	printf("\n Enter your choice=");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Suggested dish : masala dosa");
		break;
		case 2:
			printf("Suggested dish :veg biryani");
		break;
		case 3:
			printf("Suggested dish :Paneer Butter Masala with Naan");
		break;
		case 4:
			printf("Suggested dish :samosa");
		break;
		default:
		     printf("\n try some fruits");
		break;
	}
	
}
