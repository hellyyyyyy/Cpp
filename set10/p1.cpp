#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	int a,b;
	
	cout<<"Enter A : ";
	cin>>a;
	cout<<"Enter B : ";
	cin>>b;
	
	char sol[100] = {"Cannot Divide By 0"};
	
	try{
		if(b==0){
			throw 45;
		}
		else{
			cout<<a/b;
		}
	}
	
	catch(int){
		cout<<"ERROR";
	}
	catch(char[]){
		cout<<sol;
	}
	
	
	
	
	
	return 0;
}