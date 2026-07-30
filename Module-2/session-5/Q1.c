#include<stdio.h>
int main(){
    int team;
    printf("Enter your team number :");
    printf("\n 1.chennai");
    printf("\n 2.mumbai");
    printf("\n Enter your choice");
    scanf("%d",&team);
    if(team == 1){
        printf("\n Chennai Super Kings for the win! ");
    }else if(team ==2){
        printf("\n Go mumbai indians!");
    }
    else{
        printf("\n team not recognized");
    }

}