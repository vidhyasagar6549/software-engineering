/*Create a Java class called PaymentProcessor 
with two overloaded methods processPayment(): one that takes only an amount, 
and one that takes amount and a
 coupon code. Print which version is called and the final amount in each case*/
#include<iostream>
#include<string.h>
using namespace std;
class PaymentProcessor{
	public:
		void processPayment(double amount){
			cout<<"1st :-"<<amount;
		}	
		void processPayment(double amount,string coupon){
			double finalamount;
			if(coupon == "save20"){
				finalamount=amount-(amount*0.20);
				cout<<"\n the finalamount = "<<finalamount;
		    }
			else{
				cout<<"\n worng coupon code";
			}
		}	
};
main(){
	PaymentProcessor p1;
	p1.processPayment(3000);
	p1.processPayment(3000,"save20");
	p1.processPayment(3000,"save30");
}
