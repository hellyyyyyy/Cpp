#include<iostream>
#include<string.h>

using namespace std;

class Highschool{
	
	private :
		
		int id,stu_roll_no,stu_age,stu_contact[10];
		static int stu_standard;
		char stu_name[100],stu_address[100];
	    static char stu_edu_institute_name[100];
	
	public :
	    void setData(){
	    	cout<<"Enter Id : ";
	    	cin>>id;
	    	cout<<"Enter Name : ";
	    	cin>>stu_name;
	    	cout<<"Enter Roll number : ";
	    	cin>>stu_roll_no;
	    	
	    	cout<<"Enter Age : ";
	    	cin>>stu_age;
	    	cout<<"Enter Contact number : ";
	    	cin>>stu_contact[10];
	    	
	    	cout<<"Enter Address : ";
	    	cin>>stu_address;
	    	
	    	cout<<endl;
		}
		
		void getData(){
			
			cout<<"Student ID : "<<id<<endl;
			cout<<"Student Name : "<<stu_name<<endl;
			cout<<"Student Roll Number : "<<stu_roll_no<<endl;
			cout<<"Student Standard : "<<stu_standard<<endl;
			cout<<"Student Age : "<<stu_age<<endl;
			cout<<"Student Contact Number : "<<stu_contact[10]<<endl;
			cout<<"Student Education Institute : "<<stu_edu_institute_name<<endl;
			cout<<"Student Address : "<<stu_address<<endl;
			
			cout<<endl;
		}
	
};

class College{
	
	private :
		
		int id,stu_roll_no,stu_age,stu_contact[10];
		static int stu_standard;
		char stu_name[100],stu_address[100];
	    static char stu_edu_institute_name[100];
	
	public :
	    void setData(){
	    	cout<<"Enter Id : ";
	    	cin>>id;
	    	cout<<"Enter Name : ";
	    	cin>>stu_name;
	    	cout<<"Enter Roll number : ";
	    	cin>>stu_roll_no;
	    	
	    	cout<<"Enter Age : ";
	    	cin>>stu_age;
	    	cout<<"Enter Contact number : ";
	    	cin>>stu_contact[10];
	    	
	    	cout<<"Enter Address : ";
	    	cin>>stu_address;
	    	
	    	cout<<endl;
		}
		
		void getData(){
			
			cout<<"Student ID : "<<id<<endl;
			cout<<"Student Name : "<<stu_name<<endl;
			cout<<"Student Roll Number : "<<stu_roll_no<<endl;
			cout<<"Student Standard : "<<stu_standard<<endl;
			cout<<"Student Age : "<<stu_age<<endl;
			cout<<"Student Contact Number : "<<stu_contact<<endl;
			cout<<"Student Education Institute : "<<stu_edu_institute_name<<endl;
			cout<<"Student Address : "<<stu_address<<endl;
			
			cout<<endl;
		}
	
};

int Highschool :: stu_standard = 12;
char Highschool :: stu_edu_institute_name[100] = "Ashadeep";

int College :: stu_standard = 1;
char College :: stu_edu_institute_name[100] = "Ssasit";

int main(){
	
	Highschool s;	
	College c;
	
	s.setData();
	s.getData();
	
	c.setData();
	c.getData();
	
	return 0;
	
}