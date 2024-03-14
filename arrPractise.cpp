//Program list for practice

//Example1: WAP to input five values in array and find max value from array.
//#include<iostream>
//using namespace std;
//
//int main(){
//	int a[5];
//	cout<<"Enter five elements in array:\n";
//	for(int i=0;i<5;i++){
//		cin>>a[i];
//	}
//	int max=a[0];
//	for(int i=0;i<5;i++){
//		if(a[i]>max){
//			max=a[i];
//		}
//	}
//	cout<<"Maximum element in array is "<<max;
//	return 0;	
//}





//Example2: WAP to input five values in array and search value from array using linear search and using binary search algorithm 
//#include<iostream>
//using namespace std;
//
//void binarySearch(int a[],int left,int right,int val){
//	
//	while(left<right){
//		int mid=left+((right-left)/2);
//		if(a[mid]==val){
//			cout<<"Element found";
//			break;
//		}
//		if(a[mid]<val){
//			left=mid+1;
//		}
//		else{
//			right=mid-1;
//		}
//	}
//}
//int main(){
//	int a[5];
//	cout<<"Enter five values in array\n";
//	for(int i=0;i<5;i++){
//		cin>>a[i];
//	}
//	int val;
//	cout<<"Ente value to search in array ";
//	cin>>val;
//	cout<<"Using linear search\n";
//	for(int i=0;i<5;i++){
//		if(a[i]==val){
//			cout<<"Element found";
//			break;
//		}
//	}
//	cout<<"Using binary search\n";
//	binarySearch(a,0,4,val);
//	return 0;
//}





//Example3: WAP to input five values in array and arrange in ascending order?
//#include<iostream>
//using namespace std;
//int main(){
//	int a[5];
//	cout<<"Enter five elements in array\n";
//	for(int i=0;i<5;i++){
//		cin>>a[i];
//	}
//	cout<<"In ascending order\n";
//	for(int i=0;i<5;i++){
//		for(int j=i+1;j<5;j++){
//			if(a[i]>a[j]){
//				int temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//	
//	for(int i=0;i<5;i++){
//		cout<<a[i]<<" ";
//	}
//	return 0;
//}





//Example4: WAP to input five values in array and reverse the array?
//#include<iostream>
//using namespace std;
//int main(){
//	int a[5];
//	cout<<"Enter five elements in array\n";
//	for(int i=0;i<5;i++){
//		cin>>a[i];
//	}
//	cout<<"Reverse array\n";
//	int len=5;
//	int end=len-1;
//	for(int i=0;i<len/2;i++){
//		if(i<end){
//			int temp=a[i];
//			a[i]=a[end];
//			a[end]=temp;
//			end--;
//		}
//	}
//	for(int i=0;i<5;i++){
//		cout<<a[i]<<" ";
//	}
//	return 0;
//}




//Example5: WAP to input five values in array and delete value from specified index and shift array elements at left hand side?
//#include<iostream>
//using namespace std;
//int main(){
//	int a[5],idx;
//	cout<<"Enter five values in array\n";
//	for(int i=0;i<5;i++){
//		cin>>a[i];
//	}
//	cout<<"Enter index to delete element ";
//	cin>>idx;
//	for(int i=idx;i<5;i++){
//		a[i]=a[i+1];
//	}
//	cout<<"After delete \n";
//	for(int i=0;i<5-1;i++)
//		cout<<a[i]<<" ";
//		
//	return 0;
//}



//Example6: WAP to input 10 values in array and find occurrence of every element in array?
//#include<iostream>
//using namespace std;
//int main(){
//	int a[10];
//	cout<<"Enter ten elements in array\n";
//	for(int i=0;i<10;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<10;i++){
//		for(int j=i+1;j<10;j++){
//			if(a[i]>a[j]){
//				int temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//	cout<<"Occurance of elements \n";
//	int count=1;
//	for(int i=1;i<=10;i++){
//		if(a[i]==a[i-1]){
//			count++;
//		}
//		else{
//			cout<<a[i-1]<<" --> "<<count<<" ";
//			count=1;
//		}
//	}
//	return 0;
//}





//Example7: WAP to input 10 values in array and remove the duplicated values from array?
//#include<iostream>
//using namespace std;
//int main(){
//	int a[10];
//	cout<<"Enter ten elements in array\n";
//	for(int i=0;i<10;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<10;i++){
//		for(int j=i+1;j<10;j++){
//			if(a[i]>a[j]){
//				int temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//	for(int i=0;i<10;i++)
//		cout<<a[i]<<" ";
//	cout<<"after remove Duplicate elements \n";
//	int len=10;
//	for(int i=0;i<len;i++){
//		for(int j=i+1;j<len;j++){
//			if(a[i]==a[j]){
//				for(int k=j;k<len;k++){
//					a[k]=a[k+1];
//				}
//				len--;
//				j--;
//			}
//		}
//	}
//
//	for(int i=0;i<len;i++)
//		cout<<a[i]<<" ";
//	return 0;
//
//}


//Example8: WAP to input 10 values in array and find repetitive elements from array?
//#include<iostream>
//using namespace std;
//int main(){
//	int a[10];
//	cout<<"Enter ten elements in array\n";
//	for(int i=0;i<10;i++){
//		cin>>a[i];
//	}
//	for(int i=0;i<10;i++){
//		for(int j=i+1;j<10;j++){
//			if(a[i]>a[j]){
//				int temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//	for(int i=0;i<10;i++)
//		cout<<a[i]<<" ";
//	cout<<"Repetitive elements \n";
//	for(int i=1;i<10;i++){
//		if(a[i]==a[i-1]&&a[i]!=a[i+1]){
//			cout<<a[i]<<" ";
//		}
//	}
//	return 0;
//}



//Example9: WAP to input five values in array and find missing values from array?
//Note: Array element should be input in ascending order.
//Input:  1   5   9   12    15 
//Output: 2 3 4 6   7 8   10 11 13 14
//#include<iostream>
//using namespace std;
//int main(){
//	int a[5];
//	cout<<"Enter five value\n";
//	for(int i=0;i<5;i++)
//		cin>>a[i];
//	cout<<"Missing values\n";
//	for(int i=0;i<5;i++){
//		for(int j=a[i]+1;j<a[i+1];j++){
//			cout<<j<<" ";
//		}
//		cout<<"  ";
//	}
//	return 0;
//}




//Example10: WAP to sort the array by using selection sort technique?
//#include<iostream>
//using namespace std;
//int main(){
//	int a[5];
//	cout<<"Enter five value\n";
//	for(int i=0;i<5;i++)
//		cin>>a[i];
//	cout<<"After Selection sort\n";
//	for(int i=0;i<5;i++){
//		int max_idx=i;
//		for(int j=i+1;j<5;j++){
//			if(a[max_idx]<a[j]){
//				max_idx=j;
//			}
//		}
//		if(max_idx!=i){
//			int temp=a[i];
//			a[i]=a[max_idx];
//			a[max_idx]=temp;	
//		}
//	}
//	for(int i=0;i<5;i++)
//		cout<<a[i]<<" ";
//	return 0;
//}




//Example11: WAP to implement stack by using array?
//#include<iostream>
//using namespace std;
//int top=-1;
//int stack[5];
//void add(){
//	top=top+1;
//	cout<<"Enter elements in stack\n";
//	cin>>stack[top];
//	cout<<"Succesfully added\n";
//}
//void display(){
//	cout<<"Stack elements are\n";
//
//	for(int i=0;i<=top;i++)
//		cout<<stack[i]<<" ";
//}
//void deleteele(){
//	cout<<"Deleted element is "<<stack[top];
//	top=top-1;
//}
//int main(){
//	int ch,x;
//	while(x<5){
//		cout<<"\nSelect operation on stack\n 1 Add\t 2 Display\t 3 Delete\n";
//		cin>>ch;
//		switch(ch){
//			case 1:
//				add();
//				break;
//			case 2:
//				display();
//				break;
//			case 3:
//				deleteele();
//				break;
//		}
//		x++;
//	}
//	return 0;
//}




//Example12: WAP to implement queue by using array?
#include<iostream>
using namespace std;
int queue[5];
int front=0, Rear=-1;


int main(){
	
}


 




//Example13: WAP to implement Circular Queue using array?
//Example14: WAP to create 3 x 3 matrix and perform transpose of matrix?
//Example15: WAP to create 3 x 3 matrix and perform addition , multiplication of two matrix and store its result in 3rd matrix.

