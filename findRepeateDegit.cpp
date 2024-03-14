#include<iostream>
using namespace std;

class FindRepeatDigitCount{
	private:
		int no;
		int no1;
	public:	
    FindRepeatDigitCount(int number){
	 	no=number;
		no1=number;
	}
	void findRepeatDigit(){
		int c=0;
		while(no!=0){
			no/=10;
			c++;
		}
		int arr[c];
		for(int i=0;i<c;i++){
			arr[i]=no1%10;
			no1/=10;
		}
		for(int i=0;i<c;i++){
			for(int j=i+1;j<c;j++){
				if(arr[i]>arr[j]){
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		int x=0;
		for(int i=1;i<c;i++){
			if(arr[i]==arr[i-1]){
				if(x!=arr[i]){
				    no=no*10+arr[i];
			    }
				x=arr[i];
			}
		}
	}
	void show(){
		cout<<"The Repeated Digits are "<<no;
	}
};
int main(){
	int n;
	cout<<"Enter the number ";
	cin>>n;
	
	FindRepeatDigitCount P(n);
	P.findRepeatDigit();
	P.show();
	
	return 0;
}
