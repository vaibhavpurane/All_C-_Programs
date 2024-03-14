#include<iostream>
using namespace std;

class Circle{
	private:
		float radius;
		
	public:
		void setRadius(float rad){
			radius=rad;
		}
		void showArea(float radius){
			cout<<"Area of circle"<<3.14*radius*radius<<endl;
		}
};
int main(){
	float radi;
	cout<<"Enter radius  ";
	cin>>radi;
	Circle C;//C is a instance of circle class
//	C.setRadius(radi);
	C.showArea(radi);
}
