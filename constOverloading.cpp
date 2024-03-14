#include<iostream>
using namespace std;

int len;
class TestArr{
	private:
		int *ptr;
	public:
		TestArr(int a[]){
			ptr=a;
			for(int i=0;i<len;i++){
				for(int j=i+1;j<len;j++){
					if(ptr[i]>ptr[j]){
						int temp=ptr[i];
						ptr[i]=ptr[j];
						ptr[j]=temp;
					}
				}
			}
			for(int i=0;i<len;i++)
	            cout<<ptr[i]<<"\t";
		}
		TestArr(int a[],int key){
			ptr=a;
			int x=0;
			for(int i=0;i<len;i++){
				if(ptr[i]==key){
					x=1;
			        break;
				}
			}
			(x)?cout<<"\nElement is Found":cout<<"\nNot Found";
		}
};

int main(){
	cout<<"Enter the size of array: ";
	cin>>len;
	int arr[len];
	int no;
	cout<<"Enter array elements \n";
	for(int i=0;i<len;i++)
	    cin>>arr[i];
	    
	cout<<"Enter element to search\n";
	cin>>no;
	TestArr T1(arr);
	TestArr T2(arr,no);
	
	return 0;
}
