#include<iostream>
#include<string.h>
using namespace std;

class Points{
	public :
		int x;
		
		void set(int x){
			this->x=x;
		}
		
		void print(){
			cout<<"X = "<<x<<endl;
		}
		
		Points operator--(int){
			Points temp;
				temp.x=this->x--;
				
			return temp;
		}
};

int main(){
	Points p1;
	p1.set(23);
	p1.print();
	p1--;
	p1.print();
}
