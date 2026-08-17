#include<iostream>
using namespace std;
void markTaskDone(char task[5][50],int index) {
	cout<<" Enter the index :-"; 
	cin>>index;
	cout << "Task: " << task[index - 1] << " Done";	
}
main(){
	char task[5][50];
	int i;
	for(i=0;i<5;i++)
	{
		cout<<" Enter your task:-"; 
		cin>>task[i];
	}
	for(i=0;i<5;i++)
	{
		cout<<" \n Your Task are :-";
		cout<<"  task:-"<<i+1<<task[i];  
	}
	
}
