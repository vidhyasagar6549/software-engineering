#include<iostream>
#include <string>
using namespace std;
class Ticket  {
	public:
		~Ticket(){
			 cout << "Saving your ticket...";
		}
	
};
main(){
	Ticket *t1 = new Ticket() ;
	
	cout << "Ticket booked successfully!" << endl;

    delete t1;
	
}

	

