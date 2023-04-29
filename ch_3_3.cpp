#include<iostream>
using namespace std;

class Stud {
	int id;
	string name;
	string scl;
	public : 
		Stud () {
			cout<<"Enter id of student : ";
			cin>>id;
			cout<<"Enter name of student : ";
			cin>>name;
			cout<<"Enter school of student : ";
			cin>>scl;
		}
		void getData() {
			cout<<"The name of student : "<<name<<endl;
			cout<<"The id of student : "<<id<<endl;
			cout<<"The school of student : "<<scl<<endl;
			
		}
		~Stud () {
			cout<<"\nThis process is over here.";
		}
};

main () {
	Stud s;
	Stud s1=s;					//Implicit copy constructor
	cout<<"The data from implicit copy constructor\n";
	s1.getData();
	cout<<"The data from explicit copy constructor\n";
	Stud s2(s1);		//explicit copy constructor
	s2.getData();
	Stud s3;
}
