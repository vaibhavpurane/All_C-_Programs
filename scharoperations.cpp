#include<iostream>
#include<string.h>
using namespace std;

int len;
class StringOperation{
	protected:
		char str[90];
	public:
		StringOperation(char str[]){
			strcpy(this->str,str);
		}
		virtual void performOperation()=0;
};
class ConvertToUpper:public StringOperation{
	public:
		ConvertToUpper(char str[]): StringOperation(str){
			
		}
		void performOperation(){
			for(int i=0;i<len;i++){
				if(str[i]>96 && str[i]<123){
					str[i]-=32;
				}
			}
			cout<<"After converting\n"<<str;
		}
};
class MaxRepatativechar:public StringOperation{
	public:
		void performOperation(){
			char x;
		    int m=0;
		    for(int i=0;i<len;i++){
			    int c=1;
			    for(int j=i+1;j<len;j++){
				    if(str[i]==str[j]){
					    c++;
				    }
			    }
			    if(c>m){
                    m=c;
			        x=str[i];
			    }
		    }
		    cout<<"MaxRepeatativeChar : "<<x;
		}
};

int main(){
	char str[90];
	cout<<"Enter a string ";
	cin>>str;
	len=sizeof(str)/sizeof(str[0]);
	ConvertToUpper S(str);
	S.performOperation();
	MaxRepatativechar S1;
	S1.performOperation();
	
	return 0;
}
