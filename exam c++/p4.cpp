#include<iostream>
#include<string.h>
using namespace std;

class Methods{
	public :
		
		int x,y,z;
		
		void m1(){
			cout<<"Method with 0 arguments"<<endl;
		}	
		
		void m2(int x){
			this->x=x;
			
			cout<<"Method with 1 arguments"<<endl;
			cout<<"X :"<<x<<endl;
		}
		
		void m3(int x,int y){
			this->x=x;
			this->y=y;
			
			cout<<"Method with 2 arguments"<<endl;
			cout<<"X :"<<x<<" Y :"<<y<<endl;
		}
		
		void m4(int x,int y,int z){
			this->x=x;
			this->y=y;
			this->z=z;
			
			cout<<"Method with 3 arguments"<<endl;
			cout<<"X :"<<x<<" Y :"<<y<<" Z :"<<z<<endl;
		}
};

int main(){
	Methods m;
	m.m1();
	m.m2(1);
	m.m3(3,4);
	m.m4(6,7,8);
}

