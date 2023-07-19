#include<iostream>

using namespace std;

int main(){
	
	while(1){
		
	int i;
	char n;
	
	cout<<"Enter Any Alphabet:";
	cin>>n;
	
	if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' && n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
		cout<<"Vowel"<<endl;
	}
	
	else{
		cout<<"consonant"<<endl;
	}
}
	return 0;
}
