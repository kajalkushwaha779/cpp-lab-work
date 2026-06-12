#include<iostream>
using namespace std;

class Cafe{
	private:
		int cafe_id;
		string cafe_name;
		string cafe_type;
		int cafe_rating;
		string cafe_location;
		int cafe_establish_year;
		int cafe_staff_quantity;
	
	public:
		//constructor
		Cafe(){
			cafe_id=101;
			cafe_name="WhiteEye";
			cafe_type="Rooftop";
			cafe_rating=5;
			cafe_location="Vesu";
			cafe_establish_year=1990;
			cafe_staff_quantity=7;
		}
		
		void getcafeInfo(){
			cout<<"Cafe ID :"<<cafe_id<<endl<<"Cafe Name :"<<cafe_name<<endl<<"Cafe Type :"<<cafe_type<<endl<<"Cafe Rating :"<<cafe_rating<<endl
			<<"cafe Location :"<<cafe_location<<endl<<"cafe Establish Year :"<<cafe_establish_year<<endl
			<<"Cafe Staff Quantity :"<<cafe_staff_quantity<<endl;
			cout<<"-----------------"<<endl;
		}
	
};

int main(){
	
	int n;
	cout<<"Enter Number of records to be insert : ";
	cin>>n;
	Cafe cafe_arr[n];
	for(int i=0;i<n;i++){
		cafe_arr[i].getcafeInfo();
	}
	
	
	return 0;
	
}