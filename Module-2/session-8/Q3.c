#include<stdio.h>
void increByRef (int *flw1){
	*flw1=*flw1+1;
}
void increByVal (int flw2){
 	flw2++;
	 printf("\n flower after value incre in funtion =%d", flw2);
}
main(){
	int flw1=1000;
	increByRef (&flw1);
	printf("\n flower after ref incre=%d",flw1);
	int flw2=1000;
	increByVal (flw2);
	printf("\n flower after value incre=%d",flw2);
}

