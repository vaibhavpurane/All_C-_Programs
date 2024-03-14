#include<iostream>
#include<string.h>
using namespace std;
int len;
class CharArr{
	private:
		char ch[];
		int count,flag=0;
	public:
		CharArr(char ch[]){
			strcpy(this->ch,ch);
			
			for(int i=0;i<len;i++){
				if(ch[i]>='a'&&ch[i]<='z'){
					ch[i]=ch[i]-32;
				}
			}
			cout<<"After conversion \t"<<ch;
		}
		CharArr(char str[],int count){
			for(int i=0;i<len;i++){
				if(ch[i]==count+48){
					flag=1;
					break;
				}
			}
			(flag)?cout<<"Number Found\n":cout<<"Number not found\n";
			
		}
};

int main(){
	char ch[90];
	int count;
	cout<<"Enter string \n";
	cin>>ch;
	len=strlen(ch);
	cout<<"Enter the s key: ";
	cin>>count;
	CharArr c1(ch);
	CharArr c2(ch,count);
	
	return 0;
}
