#include<iostream>
using namespace std;


int main(){
	int arr[5],i,j,no,num;
	char ch;
	
	do{
		cout<<"Enter the choice"<<endl;
		cout<<"1 : Insert"<<endl;
		cout<<"2 : Delete"<<endl;
		cout<<"3 : Rotate"<<endl;
		cout<<"4 : Reverse"<<endl;
		cin>>no;
		switch(no){
			case 1:
				cout<<"Enter elements in array: "<<endl;
				for(i=0;i<5;i++){
					cin>>arr[i];
				}
				cout<<"Array elements are ";
				for(i=0;i<5;i++){
					cout<<" "<<arr[i];
				}
				break;
			case 2:
				cout<<"Enter Delete Elements "<<endl;
				cin>>num;
				for(i=0;i<5;i++){
					if(num==arr[i]){
						for(j=i;j<5;j++){
							arr[j]=arr[j+1];
						}
						break;
					}
				}
				cout<<"Array elements are ";
				for(i=0;i<5;i++){
					cout<<" "<<arr[i];
				}
				break;
			case 3:
				
				break;
			case 4:
				int end=5;
				for(i=0;i<(end/2);i++){
					int temp=arr[i];
					arr[i]=arr[end-1];
					arr[end-1]=temp;
					end--;
				}
				cout<<"Array elements are ";
				for(i=0;i<5;i++){
					cout<<" "<<arr[i];
				}
				break;
		}
		cout<<"\nDo you want to continue Y/N "<<endl;
		cin>>ch;
	}while(ch=='Y'||ch=='y');
}
