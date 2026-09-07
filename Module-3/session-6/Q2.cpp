#include<iostream>
using namespace std;
class InstaStory {
	protected:
		int storyviews=5000;
};
class SponsoredStory : public InstaStory{
	public:
	void display(){
		cout<<"the story view are"<< storyviews;
	}
	
};
main(){
	SponsoredStory s;
	s.display();
}
