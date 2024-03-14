#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char ch[90];
	cout<<"Enter a string\n";
	gets(ch);
	int len=strlen(ch);
	int end=-1;
	int end1;
	int m=0;
	for(int x=0;x<len;x++){
		for(int z=m;z!=' ';z++){
			if(ch[x]!=' '){
			for(int i=0;ch[i]!=' ';i++)
	            end++;
	        end1=end;
		}
		for(int i=0;i<=end1;i++){
		    char c=ch[i];
		    ch[i]=ch[end1];
		    ch[end1--]=c;
	    }
	    
	    m=--end;
		}
		
	}
	
	    

	
	
	
	
//	for(int i=0;i<len/2;i++){
//		char c=ch[i];
//		ch[i]=ch[end];
//		ch[end--]=c;
//	}
//	cout<<"\n"<<ch;
	
	return 0;
}
