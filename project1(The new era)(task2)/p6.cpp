#include<iostream>

using namespace std;

class Employee{
	public :
		
	int id,exp,contactno;
	char name[50],company[50];
	
};


int main(){
		
	cout<<endl;
	Employee e1,e2;
	
	cout<<"Enter Employee 1 Details. "<<endl;
	cout<<"Enter Id:";
	cin>>e1.id;
	cout<<"Enter Name:";
	cin>>e1.name;
	cout<<"Enter Experience:";
	cin>>e1.exp;
	cout<<"Enter Company Name:";
	cin>>e1.company;
	cout<<"Enter Contact number:";
	cin>>e1.contactno;
	
	cout<<endl<<"Employee 1 :"<<endl;
	
	cout<<"Employee Id = "<<e1.id<<endl<<"Employee Name: = "<<e1.name<<endl<<"Employee Experience = "<<e1.exp<<endl;
	cout<<"Employee Company Name = "<<e1.company<<endl<<"Student Contact Number = "<<e1.contactno<<endl;
	
	return 0;
}
