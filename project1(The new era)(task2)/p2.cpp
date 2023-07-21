#include<iostream>

using namespace std;

class Time{
	
	public :
	
	int s,m,h;
	
};

int main(){
	
	Time t1,t2,t;
	
	cout<<"Enter First time(hh:mm:ss):";
	cin>>t1.h >>t1.m >>t1.s;
	
	cout<<"Enter Second time(hh:mm:ss):";
	cin>>t2.h >>t2.m >>t2.s;
	
	if(t1.m<=59 && t1.s<=59 && t2.m<=59 && t2.s<=59){
		
		t.h = t1.h + t2.h;
		t.m = t1.m + t2.m;
		t.s = t1.s + t2.s;
	
		while(t.s>60){
			t.m++;
			t.s-=60;
		} 
	
		while(t.m>60){
			t.h++;
			t.m-=60;
		}
    
		cout<<"Sum : "<<t.h<<" "<<t.m<<" "<<t.s<<endl;
	
	}
	
	else{
		cout<<"Enter Minutes and Seconds below '60'"<<endl;
	}
	
	return 0;
}