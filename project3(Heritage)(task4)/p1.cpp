#include<iostream>

using namespace std;

class Mother{
	
	public :
		
	void display(){
	
		cout<<"Method From Mother Class"<<endl;
	}
	
};

class Daughter : public Mother{
	
	public :
		
	void display(){
		cout<<"Method From Daughter Class"<<endl;
	}
	
};

int main(){
	
	
	Daughter d;
	
	d.display();
	d.Mother::display();
	
	return 0;
}