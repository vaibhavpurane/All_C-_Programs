#include<iostream>
#include<string.h>
using namespace std;

class ConvertToUpper{
	char c[];
	public:
	void setcharArray(char ch[]){
		strcpy(c,ch);
	}
	void convertToUpperCase(){
		for(int i=0;i<4;i++){
			c[i]=c[i]-32;
		}		
	}
};
int main(){
	char ch[]="good";
	ConvertToUpper C;
	C.setcharArray(ch);
	C.convertToUpperCase();
	for(int i=0;i<4;i++)
		cout<<ch[i]<<endl;
}
