#include<iostream>

using namespace std;

class Student{
	public :
	int id,std,contactno;
	char name[50],school[50];
};

int main(){
	
	Student s1,s2;
	
	cout<<"Enter Id:";
	cin>>s1.id;
	cout<<"Enter Name:";
	cin>>s1.name;
	cout<<"Enter Standard:";
	cin>>s1.std;
	cout<<"Enter School:";
	cin>>s1.school;
	cout<<"Enter Contact number:";
	cin>>s1.contactno;
	
	cout<<endl;
	
	cout<<"Enter Id:";
	cin>>s2.id;
	cout<<"Enter Name:";
	cin>>s2.name;
	cout<<"Enter Standard:";
	cin>>s2.std;
	cout<<"Enter School:";
	cin>>s2.school;
	cout<<"Enter Contact number:";
	cin>>s2.contactno;
	
	cout<<endl;
	for(int i=1;i<=1;i++){
		cout<<"Students "<<i<<":"<<endl;
	}
	
	cout<<"Student Id = "<<s1.id<<endl<<"Student Name: = "<<s1.name<<endl<<"Student Standard = "<<s1.std<<endl;
	cout<<"Student School = "<<s1.school<<endl<<"Student Contact Number = "<<s1.contactno<<endl;
	
	for(int i=2;i<=2;i++){
		cout<<"Students "<<i<<":"<<endl;
	}
	
	cout<<"Student Id = "<<s2.id<<endl<<"Student Name: = "<<s2.name<<endl<<"Student Standard = "<<s2.std<<endl;
	cout<<"Student School = "<<s2.school<<endl<<"Student Contact Number = "<<s2.contactno<<endl;
	
	return 0;
}