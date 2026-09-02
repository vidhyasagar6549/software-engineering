#include<iostream>
#include<string.h>
using namespace std;
struct OrderData{
		int orderId;
		string restaurantName ;
		bool isDelivered; 
		};
class FoodOrder{
	public:
		int orderId;
		string restaurantName ;
		bool isDelivered; 
		
		FoodOrder(OrderData data)
		{
		orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
		}
		 void markDelivered()
    {
        isDelivered = true;
        cout << "Order delivered successfully!" << endl;
    }
		void display(){
			cout<<"\n orderId"<<orderId;
			cout<<"\n restaurantName"<<restaurantName;
			if(isDelivered)
			cout<<"\n status:-Delivered"<<isDelivered;
			else
			cout<<"\n status:- Not Delivered "<<isDelivered;
			
		}
		 
};
main(){
	    OrderData data = {101, "Pizza Hut", false};
	FoodOrder f1(data);
	f1.display();
	f1.markDelivered();
	f1.display();
}
