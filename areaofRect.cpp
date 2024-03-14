#include<iostream>
using namespace std;

class Rectangle{
	int length,width;
	public:
		void setLengthWidth(int len,int wid){
			length=len;
			width=wid;
		}
		void showArea(){
			cout<<"Area of Ractangle "<<length*width;
		}
};
int main(){
	int l,w;
	cout<<"Enter Length and Width of ractangle ";
	cin>>l>>w;
	Rectangle R;
	R.setLengthWidth(l,w);
	R.showArea();
}
