#include<iostream>
#include<string.h>
using namespace std;

int len;
class Occurance{
	private:
		char str[90];
		
	public:
		void setValue(char str1[]){
			strcpy(str,str1);
		}
		Occurance(char str[]){		
			for(int i=0;i<len;i++){
				for(int j=i+1;j<len;j++){
				    if(str[i]>str[j]){
				    	char temp=str[i];
				    	str[i]=str[j];
				    	str[j]=temp;
					}
			    }
			}
		}
		void beforeOccurane(){
			cout<<"Before occcurane string is :\n"<<str;
		}
		void afterOccurane(){
			int c=1;
		    for(int i=0;i<len;i++){
			        if(str[i]==str[i+1]){
			    	    c++;
				    }
				    else{
				    	cout<<"\n"<<str[i]<<"\t"<<c;
				    	c=1;
					}
		    }
		}
};

int main(){
	char str[90];
	cout<<"Enter a string\n";
    cin>>str;
    len=strlen(str);
	Occurance O(str);
	O.setValue(str);
	O.beforeOccurane();
	O.afterOccurane();
}

/*
class Occurance{
	private:
		string str;
		
	public:
		void setValue(string str){
			this->str=str;
		}
		void Occurance(string str){
			this->str=str;
		}
		void beforeOccurane(){
			cout<<"Before occcurane string is :\n"<<str;
		}
		void afterOccurane(){
			int len=strlen(str);
			for(int i=0;i<len;i++){
				int count=1;
				for(int j=i+1;j<len;j++){
				    if(strcmp(str[i],str[j])){
				    	count++;
				    	str[j]='0';
					}
			    }
			    cout<<str[i]<<count;
			}
		}
};

int main(){
	string str;
	getline(cin,str);
	Occurance O;
	O.Occurance(str);
	O.beforeOccurane();
	O.afterOccurane();
}
*/
