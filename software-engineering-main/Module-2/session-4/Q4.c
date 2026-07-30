#include<stdio.h>
main(){
	int likes,comments,shares;
	printf("\n Enter the likes comments,shares=");
	scanf("%d %d %d",&likes,&comments,&shares);
	if(likes > 1000 && comments > 200 || shares > 50)
	{
		printf("\n the post is trending");
	}
	else
	{
		printf("\n the post not trending ");
	}
}