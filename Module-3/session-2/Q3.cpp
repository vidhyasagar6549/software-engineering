#include<iostream>
#include<string>
using namespace std;
class FoodOrder{
	public:
	int orderId ;
	string restaurantName ;
	bool isDelivered ;
	
	void markDelivered(){
		isDelivered = true;
		cout<<"ordered delivered sucessfully";
	}
};
main(){
	FoodOrder f1;
	f1.orderId =101;
	f1.restaurantName="pizza_house";
	f1.isDelivered=false;
	cout<<"\n orderId"<<f1.orderId;
	cout<<"\n restaurantName :-"<<f1.restaurantName<<"\n";
	cout<<"\n isDelivered:-"<<f1.isDelivered;
	
	f1.markDelivered();
	cout<<"\n Delivered "<<f1.isDelivered;
	
	
}
