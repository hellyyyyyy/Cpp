#include<iostream>

using namespace std;

int main(){
	
	int h,m,s,sec;
	
	cout<<"Enter Time In Seconds: ";
	cin>>sec;
	
	h=sec/3600;
	sec=sec%3600;
	
	m=sec/60;
	s=sec%60;
	
	cout<<"Time (HH:MM:SS) : "<<h<<":"<<m<<":"<<s<<endl;
	
	return 0;
}