#include<iostream>

using namespace std;

class Student{
	private :
	
	int id,salary,exp;
	char name[100],role[100],add[100],email[100],contact[10];
	
	public :
		setData{int id,char name[],char role[],int salary, int exp, char add[], char email[],char contact[]}
		{
			this->id=id;
			strcpy(this->name,name);
			strcpy(this->role,role);
			this->salary=salary;
			this->exp=exp;
			strcpy(this->add,add);
			strcpy(this->email,email);
			strcpy(this->contact,contact);
		}
		
		getData(){
			
			cout<<"Student Id :"<<id<<endl;
			cout<<"Student Name :"<<name<<endl;
			cout<<"Student Role :"<<role<<endl;
			cout<<"Student Salary :"<<salary<<endl;
			cout<<"Student Experience :"<<exp<<endl;
			cout<<"Student address :"<<add<<endl;
			cout<<"Student E-mail :"<<email<<endl;
			cout<<"Student Contact Number :"<<contact<<endl;
		}
    };		


int main(){
	
	Student s1,s2,s3,s4,s5;
	
	s1.setData(int id,char name[],char role[],int salary, int exp, char add[], char email[],char contact[]);
	s1.getdata();
	
	return 0;
}