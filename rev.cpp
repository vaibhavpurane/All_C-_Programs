#include<iostream>
#include<string.h>
using namespace std;

void rev(char str[]){
	int len=strlen(str);
	int mid=len/2;
	int end=len-1;
	char temp;
	
	for(int i=0;i<mid;i++){
		temp=str[i];
		str[i]=str[end];
		str[end]=temp;
		end--;
	}
	cout<<"\nRev str is \n"<<str;
}

void rev(int a[]){
	int len=sizeof(a)/sizeof(a[0]);
	//int len=5;
	int mid=len/2;
	int end=len-1;
	int temp;
	for(int i=0;i<mid;i++){
		temp=a[i];
		a[i]=a[end];
		a[end]=temp;
		end--;
	}
	cout<<"Rev arr is\n";
	for(int i=0;i<5;i++){
		cout<<a[i]<<"\t";
	}
}

int main(){
	int arr[5];
	char str[50];
	cout<<"Enter array elements\n";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	rev(arr);
	cout<<"Enter the string\n";
	cin>>str;
	rev(str);
	
	return 0;
}
