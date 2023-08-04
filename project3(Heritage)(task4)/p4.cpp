#include<iostream>

using namespace std;

class A{
	public :
		int id,salary,experience;
		char name[100],role[100],comp_name[100],address[100],email[100],contact[10];
		
	void setter(){
		
		cout<<"Enter ID : ";
		cin>>id;
		
		cout<<"Enter Name : ";
		cin>>name;
		
		cout<<"Enter Role : ";
		cin>>role;
		
	}
};

class B : public A{
	public :
		void setter(){
			
			cout<<"Enter Salary : ";
			cin>>salary;
		
			cout<<"Enter Experience : ";
			cin>>experience;
		
		}
};

class C : public B{
	public :
		void setter(){
			
			cout<<"Enter Company Name : ";
			cin>>comp_name;
		
			cout<<"Enter Address : ";
			cin>>address;
		
		}
		
		void getter(){
			
			cout<<"Name : "<<name<<endl
				<<"Role : "<<role<<endl
				<<"Salary : "<<salary<<endl;
			
		}
};

class D : public C{
	public :
		
		void setter(){
			
			cout<<"Enter email : ";
			cin>>email;
			
			cout<<"Enter Contact Details : ";
			cin>>contact;
		}
	
		void getter(){
			
			cout<<"ID : "<<id<<endl
				<<"Name : "<<name<<endl
				<<"Role : "<<role<<endl
				<<"Salary : "<<salary<<endl
				<<"Experience : "<<experience<<endl
				<<"Company Name : "<<comp_name<<endl
				<<"Address : "<<address<<endl
				<<"E-mail : "<<email<<endl
				<<"Contact Details : "<<contact<<endl;
			
		}
};

int main(){
	D o1;
	o1.A::setter();
	o1.B::setter();
	o1.C::setter();
	o1.D::setter();
	
	cout<<endl;
	
	o1.getter();
	
	return 0;
}