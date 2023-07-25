#include<iostream>

using namespace std;

class Employee{
	
	private :
		
		int id,salary,exp;
		char name[100],role[100],add[100],email[100],contact[100];
	
	public :
		void setData(){
			cout<<"ID : ";
			cin>>id;
			cout<<"Name : ";
			cin>>name;
			cout<<"Role : ";
			cin>>role;
			cout<<"Salary : ";
			cin>>salary;
			cout<<"Experience : ";
			cin>>exp;
			cout<<"Address : ";
			cin>>add;
			cout<<"E-mail : ";
			cin>>email;
			cout<<"Contact Number : ";
			cin>>contact;
		}
		
		void getData(){
			cout<<"ID : "<<id<<endl
				<<"Name : "<<name<<endl
				<<"Role : "<<role<<endl
				<<"Salary : "<<salary<<endl
				<<"Experience : "<<exp<<endl
				<<"Address : "<<add<<endl
				<<"E-mail : "<<email<<endl
				<<"Contact Number : "<<contact<<endl;
		}
		
};

int main(){
	
	Employee e1,e2,e3,e4,e5;
	
	cout<<"Enter Employee 1 Details:"<<endl;
	e1.setData();
	cout<<endl<<"Enter Employee 2 Details:"<<endl;
	e2.setData();
	cout<<endl<<"Enter Employee 3 Details:"<<endl;
	e3.setData();
	cout<<endl<<"Enter Employee 4 Details:"<<endl;
	e4.setData();
	cout<<endl<<"Enter Employee 5 Details:"<<endl;
	e5.setData();
	
	cout<<endl<<"Employee 1 :"<<endl;
	e1.getData();
	cout<<endl<<"Employee 2 :"<<endl;
	e2.getData();
	cout<<endl<<"Employee 3 :"<<endl;
	e3.getData();
	cout<<endl<<"Employee 4 :"<<endl;
	e4.getData();
	cout<<endl<<"Employee 5 :"<<endl;
	e5.getData();
	
	
	return 0;
}
