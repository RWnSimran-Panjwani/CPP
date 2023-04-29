//Multiple 

#include<iostream>
using namespace std;

class owner {
	int salary;
	public : 
		void input () {
			cout<<"Enter the salary : ";
			cin>>salary;
		}
		void output() {
			cout<<"The salary of employee is : "<<salary<<endl;
		}
};

class manager : public owner   // derived class
{
	int income;
		public :
			void setD () {
				cout<<"Enter the income : ";
				cin>>income;
			}
			void getD() {
				cout<<"The income of employee is : "<<income<<endl;
			}
};

class employee : public owner	// derived class
{
	string name;
	int age;
	int a_n;
	int exp_s;
		public : 
			void info() {
				cout<<"Enter the name : ";
				cin>>name;
				cout<<"Enter the age : ";
				cin>>age;
				cout<<"Enter account number : ";
				cin>>a_n;
				cout<<"Enter your expected salary : ";
				cin>>exp_s;
			}	
			void inview () {
				cout<<"My name is : "<<name<<endl;
				cout<<" My age is  : "<<age<<endl;
				cout<<" My  account number is : "<<a_n<<endl;
				cout<<"My  expected salary is : "<<exp_s<<endl;
			}
};

main()
{
		int n,i;
		cout<<"Enter number of employee : ";
		cin>>n;
		
		employee e[n];
		for(i=0;i<n;i++)
		{
			cout<<"The employee "<<i+1<<"/"<<n<<endl;
			cout<<"Say something  about yourself ";
			e[i].info();
			e[i].inview();
			e[i].input();
			e[i].output();
		}
			manager m[n];
		for(i=0;i<n;i++)
		{
			cout<<"The employee "<<i+1<<"/"<<n<<endl;
			cout<<"Say something  about yourself ";
			m[i].setD();
			m[i].getD();
			m[i].input();
			m[i].output();
		}
		
		
		
		
		
}
