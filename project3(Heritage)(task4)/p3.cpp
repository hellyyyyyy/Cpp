#include<iostream>
#include<string.h>

using namespace std;

class A{
		private :
			int id;
			char name[100];
			
		public :	
			void setData(){
				cout<<"Enter Id :";
				cin>>id;
				cout<<"Enter Name : ";
				cin>>name;
			}
			
			void getData(){
				cout<<"Employee Details : "<<endl
					<<"ID : "<<id<<endl
					<<"Name : "<<name<<endl;
			}
	};
	
class B{
	
	private : 
		
		int salary;
		char role[100];
	
	public :
	
			void stData(){
				cout<<"Enter Role :";
				cin>>role;
				cout<<"Enter Salary : ";
				cin>>salary;
			}
		
			void gtData(){
				cout<<"Role : "<<role<<endl
					<<"Salary : "<<salary<<endl;
			}	
};

class C : public A , public B{
		  
		private :
			
		char contact[100];
			
		public :
			
			void sData(){
				cout<<"Enter Contact Details :";
				cin>>contact;
			}
			
			void gData(){
				cout<<"Contact : "<<contact<<endl;
		    }
	};
int main(){
	
	C e;
	
	e.setData();
	e.stData();
	e.sData();
	
	cout<<endl;
	
	e.getData();
	e.gtData();
	e.gData();
	
	return 0;
}
