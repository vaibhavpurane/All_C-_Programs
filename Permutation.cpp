#include<iostream>
using namespace std;

class Operation{
	protected:
		int num,r;
	public:
		virtual void setNumber(int num, int r)=0;
		virtual void operation()=0;
};
class Permutation:public Operation{
	public:
		void setNumber(int num, int r){
			this->num=num;
			this->r=r;
		}
		void operation(){
			int numfact=1;
			int num_r=num-r;
			int num_rfact=1;
			for(int i=1;i<=num;i++)
				numfact*=i;
			
			for(int i=1;i<=num_r;i++)
			    num_rfact*=i;
			
			cout<<"\nPermutation is "<<numfact/num_rfact;
		}
};
class Combination:public Operation{
	public:
		void setNumber(int num, int r){
			this->num=num;
			this->r=r;
		}
		void operation(){
			int numfact=1;
			int num_r=num-r;
			int num_rfact=1;
			int rfact=1;
			for(int i=1;i<=num;i++)
				numfact*=i;
			
			for(int i=1;i<=num_r;i++)
			    num_rfact*=i;
			
			for(int i=1;i<=r;i++)
			    rfact*=i;
			    
			cout<<"\nCombination is "<<numfact/(rfact*num_rfact);
		}
		
};

int main(){
	
	int num,r;
	cout<<"Enter a number and r \n";
	cin>>num>>r;
	Permutation P;
	P.setNumber(num, r);
	P.operation();
	Combination C;
	C.setNumber(num,r);
	C.operation();
	return 0;
}
