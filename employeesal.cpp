#include<iostream>
#include<string.h>
using namespace std;

class Employee{
	char str[99];
	int id,b_sal,prog;
	int totalSal,increSal;
	public:
		void setPersonalInfo(char name[],int no,int basicsal,int p){
			strcpy(str,name);
			id=no;
			b_sal=basicsal;
			prog=p;
		}
		void setProgressPer(int progres){
			if(prog>=60){
				totalSal=b_sal+((b_sal*30)/100);
				increSal=totalSal-b_sal;
			}
		}
		void show(){
			cout<<"Name "<<str<<endl;
			cout<<"ID "<<id<<endl;
			cout<<"Basic Salary "<<b_sal<<endl;
			cout<<"Increment Salary "<<increSal<<endl;
			cout<<"Total Salary "<<totalSal<<endl;
		}
};
int main(){
	char name[99];
	int id,basic_sal,progress;
	cout<<"Enter name ";
	cin>>name;
	cout<<"Enter ID and Basic salary ";
	cin>>id>>basic_sal;
	cout<<"Enter progress ";
	cin>>progress;
	Employee E;
	E.setPersonalInfo(name,id,basic_sal,progress);
	E.setProgressPer(progress);
	E.show();
}
