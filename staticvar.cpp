#include<iostream>
using namespace std;

class Employee{
	public:
		int c=9;
		static int i;
	
};

int Employee::i=88;

int main(){
	Employee E;
	cout<<E.i<<" "<<E.c;
	
}

