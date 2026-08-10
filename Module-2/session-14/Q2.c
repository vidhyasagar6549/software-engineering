#include<stdio.h>
//function declared with parameter
void isEven(int num){ 
//if condtion for checking the number is even or odd
	if(num%2==0){
		//printing of the number is even
		printf("\n the number is even %d",num);
		//else condtion 
	}else{
	//printing of the number is odd
			printf("\n the number is odd %d",num);
	}
}
main(){
//calling the fuction and assining the value
     isEven(7);
	 	
}

