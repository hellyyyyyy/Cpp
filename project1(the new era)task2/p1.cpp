#include<iostream>
#include<string.h>

using namespace std;

class Distance{
	public :
	int feet,inch;
};

int main(){
	
	Distance d1,d2,sum;
	
	cout<<"Enter Feet 1: ";
	cin>>d1.feet;
	cout<<"Enter Inch 1: ";
	cin>>d1.inch;
	
	cout<<"Enter Feet 2: ";
	cin>>d2.feet;
	cout<<"Enter Inch 2: ";
	cin>>d2.inch;
	
	sum.feet=d1.feet + d2.feet;
	sum.inch=d1.inch + d2.inch;
	
	while(sum.inch>=12)
	{
		sum.feet++;
		sum.inch-=12;
	}
	
	cout<<"Feet ="<<sum.feet<<endl<<"Inch ="<<sum.inch<<endl;
	
	return 0;
}