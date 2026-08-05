#include<stdio.h>
main(){
	int num,rem,temp,rev=0,first,last;
	printf("\n enter your num=");
	scanf("%d",&num);
	temp = num;
	last = num % 10;
	while(num != 0){
		rem = num%10;
		rev= rev*10+rem;
		num = num/10;
	}
	first = rev % 10;
	rev = first + last;
	printf("\n sum of first and last is =%d",rev);
}