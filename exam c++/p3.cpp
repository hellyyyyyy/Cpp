#include<iostream>
#include<string.h>
using namespace std;

class Hotel{
	private :
		int id,staff_size,room_size,estabilish_year,rating_type;
		char name[100],type[100],address[100],website[100];
		
	public :
		void set(int id,char name[],char type[],int staff_size,int room_size,int estabilish_year,char address[],int rating_type,char website[]){
			this->id=id;
			strcpy(this->name,name);
			strcpy(this->type,type);
			this->staff_size=staff_size;
			this->room_size=room_size;
			this->estabilish_year=estabilish_year;
			strcpy(this->address,address);
			this->rating_type=rating_type;
			strcpy(this->website,website);
		}
		
		void get(){
			cout<<"ID : "<<id<<endl
				<<"Name : "<<name<<endl
				<<"Type : "<<type<<endl
				<<"Staff size : "<<staff_size<<endl
				<<"Room size : "<<room_size<<endl
				<<"Estabilish Year : "<<estabilish_year<<endl
				<<"Address : "<<address<<endl
				<<"Rating Type : "<<rating_type<<endl
				<<"Website : "<<website<<endl;
		}
};

int main(){
	Hotel h1;
	h1.set(1,"Brooklyn Hotel","Luxury",50,150,2000,"Vesu",5,"www.broklynhotel.in");
	h1.get();	
	
	return 0;
}