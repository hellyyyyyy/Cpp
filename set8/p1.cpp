#include<iostream>
#include<string.h>
using namespace std;

class Methods{
	public :
		
		int a,b;
		float c;
		
	void m1(){
		cout<<"Methods"<<endl;	
	}
	
	void m2(float c){
		this->c=c;
		
		cout<<"C = "<<c<<endl;
	}
	
	void m3(int a,float c){
		this->a=a;
		this->c=c;
		
		cout<<"A = "<<a<<endl
			<<"C = "<<c<<endl;
	}
	
	void m4(int a,int b,float c){
		this->a=a;
		this->b=b;
		this->c=c;
		
		cout<<"A = "<<a<<endl
			<<"B = "<<b<<endl
			<<"C = "<<c<<endl;
	}
};

int main(){
	Methods m;
	m.m1();
	m.m2(13.4);
	m.m3(14,12.43);
	m.m4(12,16,23.65);
}
