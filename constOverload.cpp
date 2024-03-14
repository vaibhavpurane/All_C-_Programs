//Write a program to create constructor overloading. Write three constructors in class. In first const pass two para of type int , 
//in second pass two of type float and in third pass string para.
//In first two const perform of two number and in third const convert lower to upper without using inbuilt fun.

#include<iostream>
#include<string.h>
using namespace std;

class ConstOverloading{
	private:
		int a,b;
		float x,y;
		char str[20];
	public:
		ConstOverloading(int a,int b){
			this->a=a;
			this->b=b;
			cout<<"Addition is "<<a+b;
		}
		ConstOverloading(float x,float y){
			this->x=x;
			this->y=y;
			
		}
		ConstOverloading(char str[]){
			strcpy(this->str,str);
			for(int i=0;i<strlen(str);i++){
				str[i]=str[i]-32;
			}
			cout<<"After conversion : "<<str;
		}
};

int main(){
	int a,b;
	float x,y;
	char str[20];
	cout<<"Enter two integer value\n";
	cin>>a>>b;
	cout<<"Enter two float value\n";
	cin>>x>>y;
	cout<<"Enter string\n";
	cin>>str;
	
	
	ConstOverloading A(a,b);
	ConstOverloading B(x,y);
	ConstOverloading C(str);
	
	return 0;
}
