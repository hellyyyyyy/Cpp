#include<iostream>
#include<string.h>

using namespace std;

class Hotel{
	private :
		int id,staff_size,room_size,estabilish_year,rating_type;
		char name[100],type[100],address[100],website[100];	
	
	public :
		
		void setData(int id, char name[], char type[], int staff_size, int room_size, int estabilish_year, char address[], int rating_type, char website[]){
			
			this -> id=id;
			strcpy(this -> name,name);
			strcpy(this -> type,type);
			this -> staff_size = staff_size;
			this -> room_size = room_size;
			this -> estabilish_year = estabilish_year;
			strcpy(this -> address,address);
			this -> rating_type = rating_type;
			strcpy(this -> website,website);
	
		}
		
		void getData(){
			
			cout<<"ID : "<<id<<endl
				<<"Name : "<<name<<endl
				<<"Staff Size : "<<staff_size<<endl
				<<"Room Size : "<<room_size<<endl
				<<"Estabilish Year : "<<estabilish_year<<endl
				<<"Address : "<<address<<endl
				<<"Rating : "<<rating_type<<endl
				<<"Website : "<<website<<endl;
			
		}
};

int main(){
		
	Hotel e;
	
		e.setData(11,"Brooklyn Hotel","Luxury",200,80,2006,"Vesu",5,"www.brooklyn32@gmail.com");
		
		e.getData();
	
	return 0;
}
