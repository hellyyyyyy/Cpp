#include<iostream>
#include<string.h>
using namespace std;

class Time{
	public :
		int h,m,s,sec;
	
	void get(){
		cout<<"Enter Time In Seconds : ";
		cin>>sec;
		
		h=sec/3600;
		sec=sec%3600;
		
		m=sec/60;
		s=sec%60;
	
		cout<<"Time(HH:MM:SS) :"<<h<<":"<<m<<":"<<s;
	}
		
};

int main(){
	
	Time t1;
	t1.get();
	return 0;
}