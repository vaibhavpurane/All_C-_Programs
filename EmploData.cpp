#include<iostream>
#include<string.h>
using namespace std;

class Person{
	protected:
		char name[50];
		int mob;
		string adharno;
	public:
		Person(char name[],int mob,string adharno){
			strcpy(this->name,name);
			this->mob=mob;
			this->adharno=adharno;
		}
		
		virtual void display()=0;
};
class Employee:public Person
{
	private:
		int empid;
		char dept[50];
		int salary;
	public:
		Employee(int empid,char dept[], int salary,char name[],int mob,string adharno):Person( name, mob, adharno)
		{
			this->empid=empid;
			strcpy(this->dept,dept);
			this->salary=salary;
			
		}
		void display(){
			cout<<"Emplyee Data\n";
			cout<<empid<<"\t"<<name;
			
		}
};
int main(){
	Employee E(1,"it",1000,"vaibhav",1234567890,"223344");
	E.display();
	return 0; 
	
}

