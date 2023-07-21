#include<iostream>

using namespace std;

class Home{
 	public :

	int room,no;
	char soc[100];
};

int main(){
	
	Home h;
	
	cout<<"Enter Name of Society : ";
	cin>>h.soc;
	
	cout<<"Enter Number of Rooms :";
	cin>>h.room;
	
	cout<<"Enter House Number : ";
	cin>>h.no;
	
	cout<<endl;
	
	cout<<"Society Name :"<<h.soc<<endl<<"number of Rooms :"<<h.room<<endl<<"House Number :"<<h.no<<endl;
	
	return 0;
}
