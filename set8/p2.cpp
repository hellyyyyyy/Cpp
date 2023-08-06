#include<iostream>
#include<string.h>
using namespace std;

class A{
	public :
		void m1(){
			cout<<"Method From Class A"<<endl;
		}
};

class B{
	public :
		void m1(){
			cout<<"Method From Class B"<<endl;
		}
};

int main(){
	B o;
	o.m1();
	
}
