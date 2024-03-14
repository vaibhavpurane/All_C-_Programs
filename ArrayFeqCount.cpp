#include<iostream>
using namespace std;

class ArrayFeqCount{
	int c[];
	public:
		setIntArray(int ch[]){
			for(int i=0;i<5;i++)
				c[i]=ch[i];
		}
		void sort(int c[]){
			for(int i=0;i<5;i++){
				for(int j=i+1;j<5;j++){
					if(c[i]>c[j]){
						int temp=c[i];
						c[i]=c[j];
						c[j]=temp;
					}
				}
			}
		}
		void countFeqCount(int c[]){
			int count=1;
			for(int i=0;i<5;i++){
				if(c[i]==c[i+1]){
					count++;
				}
				else{
					cout<<c[i]<<" --> "<<count<<endl;
					count=1;
				}
			}
		}
};
int main(){
	ArrayFeqCount A;
	int arr[5]={3,4,4,3,1};
	A.setIntArray(arr);
	A.sort(arr);
	A.countFeqCount(arr);
}
