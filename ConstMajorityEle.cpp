#include<iostream>
using namespace std;

int len;
class MajorityElement{
	private:
		int *a;
	public:
		MajorityElement(int arr[]){
			a=arr;
		}
		int checkMajority(){
			int flag=0;
			for(int i=0;i<len;i++){
				int c=1;
				for(int j=i+1;j<len;j++){
					if(a[i]==a[j]){
						c++;
					}
				}
				//(c>(len/2))? flag=1:0;
				if(c>(len/2)){
					flag=1;
					break;
				}
			}
			(flag)?cout<<"Majority Element present":cout<<"Majority Element is Not present";
		}
};

int main(){
	cout<<"Enter length of array";
	cin>>len;
	int arr[len];
	cout<<"Enter array Element\n";
	for(int i=0;i<len;i++)
	    cin>>arr[i];
	    
	MajorityElement M(arr);
	M.checkMajority();
	return 0;
}
