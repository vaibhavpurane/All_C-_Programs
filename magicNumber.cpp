#include<iostream>
using namespace std;

class Number{
	protected:
		int num;
	public:
	virtual void setNumber(int num)=0;
	virtual void isNum()=0;
};

class Magic:public Number{
	public:
		void setNumber(int num){
			this->num=num;
		}
		void isNum(){
			int num1=num;
			int sum=0;
			int rev=0;
			while(num!=0){
				sum=sum+(num%10);
				num/=10;
			}
			int newsum=sum;
			while(sum!=0){
				rev=rev*10+(sum%10);
				sum/=10;
			}
			(newsum*rev==num1)? cout<<"Magic Number\n":cout<<"Not Magic number\n";
		}
};
class Neon:public Number{
	public:
		void setNumber(int num){
			this->num=num;
		}
		void isNum(){
			int sq=num*num;
			int sum=0;
			while(sq!=0){
				sum=sum+(sq%10);
				sq/=10;
			}
			(sum==num)? cout<<"Neon Number":cout<<"Not Neon";
		}
};

int main(){
	int number;
	cout<<"Enter a number ";
	cin>>number;
	Magic M;
	M.setNumber(number);
	M.isNum();
	Neon N;
	N.setNumber(number);
	N.isNum();
	return 0;
}
