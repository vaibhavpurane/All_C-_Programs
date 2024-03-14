#include<iostream>
#include<string.h>
using namespace std;

void area(float r){
	cout<<"Area of Circle is "<<3.14*r*r<<"\n";
}

void area(int a){
	cout<<"Area of square is "<<a*a<<"\n";
}


int main(){
	float r;
	int a;
	cout<<"Enter radius and side of square\n";
	cin>>r>>a;
	area(r);
	area(a);
}
