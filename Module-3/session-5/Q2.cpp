/*Build two classes, InstagramUploader and YouTubeUploader, 
each with a method uploadContent(). Both should extend a base class
 SocialMediaUploader and override uploadContent() to print a
 message showing how uploading works differently for Instagram and YouTube.*/
 
#include<iostream>
#include<string.h>
using namespace std;
class SocialMediaUploader{
	virtual void uploadContent()
    {
        cout << "Uploading content on social media" << endl;
    }
};
class InstagramUploader : public SocialMediaUploader{
	public:
	void uploadContent(){
		 cout << "Uploading photo or reel on Instagram" << endl;
	}
};
class YouTubeUploader : public SocialMediaUploader{
	public:
		void uploadContent(){
			 cout << "Uploading video on YouTube" << endl;
		}
};
main(){
	InstagramUploader i;
	YouTubeUploader y;
	i.uploadContent();
	y.uploadContent();
}

