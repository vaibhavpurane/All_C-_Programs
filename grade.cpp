#include<iostream>
using namespace std;

class Student{
	private:
		int *ptr;
		float per;
		
	public:
		void setSubMarks(int arrAddress[]){
			ptr=arrAddress;
		}
		void calPer(){
			float sum=0;
			for(int i=0;i<6;i++){
				cout<<" "<<ptr[i];
			}
			for(int i=0;i<6;i++){
				sum=sum+ptr[i];
			}
			per=(sum/600)*100;
			cout<<"\nPercentage "<<per;
		}
		void checkGrade(){
			(per>75&&per<=100)?cout<<"\nDistinction":(per>60&&per<=75)?cout<<"\nFirst Division":(per>50&&per<=60)?cout<<"\nSecond Division":(per>40&&per<=50)?cout<<"\nThird Division":cout<<"\nFailed";
		}
};
int main(){
	int arr[6];
	cout<<"Enter the marks"<<endl;
	for(int i=0;i<6;i++){
		cin>>arr[i];
	}
	Student S;
	S.setSubMarks(arr);
	S.calPer();
	S.checkGrade();
}
