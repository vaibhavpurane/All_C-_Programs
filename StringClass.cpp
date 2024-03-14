#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int len;
class StringClass{
	private:
		char str[20];
	public:	
	    int flag=1;
		
		int end=len-1;
		int end1=len-1;	
		StringClass(char str[]){
			strcpy(this->str,str);
		}
		int isPalindrome(){
			
			for(int i=0;i<len/2;i++){
				if(str[i]!=str[end--]){
					flag=0;
					break;
				}
			}
			(flag)?cout<<"Palindrome\n":cout<<"Not Palindrome\n";
		}
		int StringReverse(){
			for(int i=0;i<len/2;i++){
				char temp=str[i];
				str[i]=str[end1];
				str[end1]=temp;
				end1--;
			}
			cout<<"After Reverse : "<<str;
		}
};

int main(){
	char str[20];
	cout<<"Enter a string: ";
	cin>>str;
	len=strlen(str);
	
	StringClass S(str);
	S.isPalindrome();
	S.StringReverse();
	
	return 0;
}
