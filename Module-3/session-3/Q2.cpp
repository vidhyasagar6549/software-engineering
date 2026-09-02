#include<iostream>
#include <string>
using namespace std;
class Product {
	public:
		string productName;
		int price;
		float rating;
		
	Product(string n,int p,float r){
		productName=n;
		price=p;
		rating=r;
	}	
	void displayinfo(){
		cout<<"\n the productName is="<<productName;
		cout<<"\n the price is="<<price;
		cout<<"\n the rating is="<<rating;
	}

	
};
main(){
	string productName;
		int price;
		float rating;
		
		cout<<"\n Enter your productName";
		cin>>productName;
		cout<<"\n Enter your price";
		cin>>price;
		cout<<"\n Enter your rating";
		cin>>rating;
	Product  p1(productName,price,rating);
	
	p1.displayinfo();
}

	

