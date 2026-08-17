 #include<iostream>
 using namespace std;
 main(){
    char string[5][50];
 	int i ,a;
 	cout<<" Enter the number of string you want to enter :-"; 
 	cin>>a;
 	for(i=0;i<a;i++){
 	cout<<" Enter your string:-"; 
 	cin>>string[i];
 	}
 	for(i=0;i<a;i++){
 		 cout<<"\n The strings are :-"<<string[i];
	 }
}
