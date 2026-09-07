#include<iostream>
using namespace std;
class Product {
	public:
	 virtual void upload()=0;
};
class Electronics :public Product{
	public:
		void upload(){
		cout << "Uploading Electronics product to Flipkart.";
		}
			
};
class Clothing : public Product{
	public:
		void upload(){
			cout <<"\nUploading clothing product to Flipkart.";
		}
};
main(){
	Electronics e;
    Clothing c;

    e.upload();
    c.upload();
}
