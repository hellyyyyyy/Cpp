#include<iostream>

using namespace std;

int main(){
	
	int i;
	char n[50];
	
	cout<<"Enter value:";
	cin>>n;
	
	for(i=0;n[i]!='\0';i++){
		if(n[i]>='0' && n[i]<='9'){
			cout<<"Numeric"<<endl;
		}
		
		else{
			cout<<"Not Numeric"<<endl;
		}
	}
	
	return 0;
}
