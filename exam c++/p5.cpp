#include<iostream>
#include<string.h>
using namespace std;

class A{
	public :
		int id,salary,experience;
		char name[100],role[100],comp_name[100],address[100],email[100],contact[10];
		
	void setter(){
		cout<<"Enter ID :";
		cin>>id;
		cout<<"Enter Name :";
		cin>>name;
		cout<<"Enter Role :";
		cin>>role;
	}
	
};

class B : public A{
	
	public :
	
	void setter(){
		cout<<"Enter salary :";
		cin>>salary;
		cout<<"Enter Experience :";
		cin>>experience;
	}

};

class C : public B{
	
	public :
	
	void setter(){
		cout<<"Enter Company Name :";
		cin>>comp_name;
		cout<<"Enter Address :";
		cin>>address;
	}
	
	void getter(){
		cout<<"Name :"<<name
			<<"Role :"<<role
			<<"Salary :"<<salary;
	}
};

class D : public C{
	
	public :
	
	void setter(){
		cout<<"Enter Email :";
		cin>>email;
		cout<<"Enter contact Number :";
		cin>>contact;
	}
	
	void getter(){
		
		cout<<"ID :"<<id<<endl
			<<"Name :"<<name<<endl
			<<"Role :"<<role<<endl
			<<"Salary :"<<salary<<endl
			<<"Experienc :"<<experience<<endl
			<<"Company Name :"<<comp_name<<endl
			<<"Address :"<<address<<endl
			<<"Email :"<<email<<endl
			<<"Contact :"<<contact<<endl;
			
	}
};

int main(){
	D o;
	o.A::setter();
	o.B::setter();
	o.C::setter();
	o.D::setter();
	o.D::getter();
}