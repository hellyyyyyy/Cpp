#include<iostream>

using namespace std;

class Animal{
	public :
		int age;
		char name[100],origin[100];
		
		void set_value(){
			cout<<"Enter Place Of Origin : ";
			cin>>origin;
		}
};

class Zebra : public Animal{
	
	public :
	
		void setData(){
			cout<<"Enter Name of Zebra : ";
			cin>>name;
			
			cout<<"Enter the Age of Zebra : "	;
			cin>>age;
		}
		
		void getData(){
			cout<<"Name : "<<name<<endl
				<<"Age : "<<age<<endl
				<<"Origin : "<<origin<<endl;
		}
	
};

class Dolphin : public Animal{
	
	public :
		void stData(){
			cout<<"Enter Name of Dolphin : ";
			cin>>name;
			
			cout<<"Enter the Age of Dolphin : ";
			cin>>age;
		}
		
		void gtData(){
			cout<<"Name : "<<name<<endl
				<<"Age : "<<age<<endl
				<<"Origin : "<<origin<<endl;
		}
		
};


int main(){
	
	Zebra o1;
	o1.setData();
	o1.set_value();
	o1.getData();
	
	cout<<endl;
	
	Dolphin o2;
	o2.stData();
	o2.set_value();
	o2.gtData();
}