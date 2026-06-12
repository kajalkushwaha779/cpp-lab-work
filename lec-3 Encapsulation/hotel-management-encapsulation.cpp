#include<iostream>
using namespace std;
class Hotel{
	private:
		int hotel_id;
		string hotel_name;
		string hotel_type;
		int hotel_rating;
		string hotel_location;
		int hotel_establish_year;
		int hotel_staff_quantity;
		int hotel_room_quantity;
	
	public:
		//setter function
		void hotelinfo( int id,string name,string type, string location,int rating,int year,int staff, int room){
		hotel_id= id;
		hotel_name= name;
		hotel_type= type;
		hotel_rating=rating;
		hotel_location=location;
		hotel_establish_year=year;
		hotel_staff_quantity=staff;
		hotel_room_quantity=room;	
		}
		//getter function
		void getinfo(){
			cout<<"hotel id :"<<hotel_id<<endl<<"hotel name :"<<hotel_name<<endl<<"hotel rating :"<<hotel_rating<<endl
			<<"hotel type :"<< hotel_type<<endl<<"hotel location :"<<hotel_location<<endl
			<<"hotel establish year :"<<hotel_establish_year<<endl<<"hotel staff quantity :"<<	
			hotel_staff_quantity<<endl<<"hotel room quantity :"<<hotel_room_quantity;
		}
		
	
};
int main(){
	Hotel hotels[50];
	int n;
	int id;
	int rating;
	int year;
	string name; 
	string type; 
	string location;
	int staff; 
	int room;
	cout<<"Enter hotel record number:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter hotel id: "<<endl;
		cin>> id;
		cout<<"enter hotel name: "<<endl;
		cin>> name;
		cout<<"enter hotel rating: "<<endl;
		cin>> rating;
		cout<<"enter hotel year: "<<endl;
		cin>>year;
	    cout<<"enter hotel staff quantity: "<<endl;
		cin>>staff;
		cout<<"enter hotel type: "<<endl;
		cin>>type;
		cout<<"enter hotel location: "<<endl;
		cin>>location;
		cout<<"enter hotel room quantity: "<<endl;
		cin>>room;
		hotels[i].hotelinfo(id,name,type,location,rating,year,staff,room);
	}
	for(int i=0;i<n;i++){
		hotels[i].getinfo();
		cout<<endl;
	}	  	
		
	return 0;
}