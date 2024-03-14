#include<iostream>
#include<string.h>
using namespace std;
void checkPalindrome(char str[]){
	int len=strlen(str);
	int mid=len/2;
	int end=len-1;
	int flag=1;
	for(int i=0;i<=mid;i++){
		if(str[i]!=str[end]){
			flag=0;
			break;
		}
		end--;
	}
	(flag)?cout<<"str is palindrome\n":cout<<"str is not palindrome\n";
}
void checkPalindrome(int number){
	int temp,rem,rev=0;
	temp=number;
	while(number!=0){
		rem=number%10;
		rev=rev*10+rem;
		number/=10;
	}
	(temp==rev)?cout<<"No is palindrome\n":cout<<"No is Not palindrome";
}
int main(){
	int no;
	char name[40];
	cout<<"Enter number and Name\n";
	cin>>no>>name;
	checkPalindrome(no);
	checkPalindrome(name);
}
