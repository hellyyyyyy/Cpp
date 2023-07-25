#include<iostream>
#include<string.h>

using namespace std;

class India{
	
	private : 
		static char state[100];
		char capital[100],lang[100],food[100];
		
	public :
		void setData(){
			
			cout<<"Enter Capital Of Your State : ";
			cin>>capital;
			cout<<"Enter Language Of Your State : ";
			cin>>lang;
			cout<<"Enter Food For Your State : ";
			cin>>food;
			
		}
		
		static void print(){
			cout<<"State : "<<state<<endl;
		}
		
		
		void getData(){
			
			cout<<"Capital : "<<capital<<endl
			    <<"Language : "<<lang<<endl
			    <<"Food : "<<food<<endl;
			
		}
	
};

char India :: state[100] = "Gujarat";

int main(){
	
	India s;
	
	s.setData();
	
	cout<<endl;
	
	s.print();
	s.getData();
	
	return 0;
}
