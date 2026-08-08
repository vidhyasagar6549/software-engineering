#include<stdio.h>
main(){

	int choice;
	char team[20];
	
	while(1){
		printf("\n IPL Team Menu");
		printf("\n 1.View your favorite 3 ipl teams");
		printf("\n 2.Add a new team");
		printf("\n 3.Exit");
		printf("\n Enter your choice");
		scanf("%d",&choice);
		if(choice == 1)
		{
			printf("\n mi");
			printf("\n rcb");
			printf("\n csk");
			
		}
		else if(choice == 2)
		{
			printf("\n Enter new team");
			scanf("%s",team);
		}
		else if (choice == 3){
			break;
		}
		else{
			printf("\n not valid choice");
		}
		}
	}
	

