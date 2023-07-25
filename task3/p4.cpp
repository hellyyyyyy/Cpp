#include<iostream>
#include<string.h>

using namespace std;

class India{
	
	private : 
		char state[100],capital[100],lang[100],food[100];
		
	public :
		void setData(){
			
			cout<<"Enter State : ";
			cin>>state;
			cout<<"Enter Capital Of Your State : ";
			cin>>capital;
			cout<<"Enter Language Of Your State : ";
			cin>>lang;
			cout<<"Enter Food For Your State : ";
			cin>>food;
			
		}
		
		
		void getData(){
			
			cout<<"State : "<<state<<endl
			    <<"Capital : "<<capital<<endl
			    <<"Language : "<<lang<<endl
			    <<"Food : "<<food<<endl;
			
		}
	
};

int main(){
	
	India s;
	
	s.setData();
	
	cout<<endl;
	
	s.getData();
	
	return 0;
}