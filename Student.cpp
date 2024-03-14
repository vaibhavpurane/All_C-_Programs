#include<iostream>
#include<string.h>
using namespace std;

class Student{
	Student *s;
	int no,marks;
	string name;
	
	public:
		Student(Student *S){
			char str[20];
    	    cout<<"Ente name of student : ";
	        cin>>str;
    	    int id,total_marks;
	        cout<<"Enter student id & total marks \n";
	        cin>>id>>total_marks;
		}
};

int main(){
	
	Student S;
	Student(&S);
	
	return 0;
}
