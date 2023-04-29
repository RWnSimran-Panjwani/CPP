#include<iostream>
using namespace std;

class A {
	int a,b;
	
	public :
		A () {
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
		}
		void getData() {
			cout<<"The sum of a and b is : "<<a+b;
		}
};

main () {
	A a1;
	A a2=a1;
	cout<<"\nFrom implicit copy constructor\n";
	a2.getData();
	cout<<"From explicit copy constructor";
	A a3(a1);
	a3.getData();
	
}
