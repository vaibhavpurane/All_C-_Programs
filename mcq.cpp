#include<iostream>
using namespace std;
class T{
	public:
		int i;
		void get();
};
void T::get(){
	cout<<"Enter value of i ";
	cin>>i;
}
T t;
int main(){
	T t;
	t.get();
	cout<<"value of local i "<<t.i<<"\n";
	::t.get();
	cout<<"value of global i "<<::t.i<<"\n";
	return 0;
}
