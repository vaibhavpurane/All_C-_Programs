#include<iostream>
using namespace std;

class InsertArrayEle{
	int c[];
	public:
		setIntArray(int ch[]){
			for(int i=0;i<6;i++)
				c[i]=ch[i];
		}
		void insertValueOnIndex(){
			c[5]=6;
		}
};
int main(){
	int arr[6]={1,2,3,4,5};
	
	InsertArrayEle I;
	I.setIntArray(arr);
	I.insertValueOnIndex();
	for(int i=0;i<6;i++)
		cout<<arr[i]<<endl;
}
