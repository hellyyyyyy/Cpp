#include<iostream>

using namespace std;

int main(){
	
	int i;
	char n[50];
	
	cout<<"Enter Value:";
	cin>>n;
	
	for(i=0;n[i]!='\0';i++){
		if(n[i]>='A' && n[i]<='Z'){
			n[i]+=32;
		}
		else if(n[i]>='a' && n[i]<='z'){
			n[i]-=32;
		}
	}
	
	cout<<"Toggle case: "<<n;
	
	return 0;
}
