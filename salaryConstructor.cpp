#include<iostream>
#include<string.h>

using namespace std;

class Salary{
	private:
    	string name;
	    int id;
	    char contact[10];
	    int presentDay;
	    int perDaySalary;
	public:
		int Salary;
		void setValue(string name,int id,char contact[],int presentDay,int perDaySalary){
			this->name=name;
			this->id=id;
			strcpy(this->contact,contact);
			this->presentDay=presentDay;
			this->perDaySalary=perDaySalary;
		}
		void calculatesalary(){
			Salary=presentDay*perDaySalary;
		}
		void show(){
			cout<<"The Salary is "<<Salary;
		}
};
int main(){
	string name;
	cout<<"Enter a name: ";
	getline(cin,name);
	int id;
	char contact[10];
	int presentDay;
	int perDaySalary;
	cout<<"Enter id, contact no, presentDays, perDaySalary\n";
	cin>>id>>contact>>presentDay>>perDaySalary;
	
	Salary S;
	S.setValue(name,id,contact,presentDay,perDaySalary);
	S.calculatesalary();
	S.show();
}
