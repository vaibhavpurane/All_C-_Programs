#include<iostream>
#include<string.h>
using namespace std;

class CharOperation{
	private:
		char str[90][90];
	public:
		int count=0;
		CharOperation(char s[90][90]){
			for(int i=0;i<3;i++){
				strcpy(str[i],s[i]);
			}
		}
		void performOperation(){
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<"In j"<<"\n";
				}
//				if(strcmp(str[i],'\0')==0){
//					count++;
//				}

                count++;
			}
			cout<<"fghjk"<<count;
		}
		
};

int main(){
	char para[90][90];
	cout<<"Enter a String \n";
	for(int i;i<3;i++){
		gets(para[i]);
	}
	
	CharOperation O(para);
	O.performOperation();
	
	return 0;
}
