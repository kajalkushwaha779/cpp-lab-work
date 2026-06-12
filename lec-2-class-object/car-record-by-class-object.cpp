#include<iostream>
using namespace std;
class Car{
	private:
        int car_id;
		string car_name;
		string car_color;
	    string car_model;
		int car_release_year;
	public:
		//setter function
		void carinfo( int id,string name,string color,string model,int releaseyear){
	    car_id=id;
		car_name=name;
		car_color=color;
	    car_model=model;
		car_release_year=releaseyear;	
		}
		//getter function
		void cargetinfo(){
			cout<<"car id :"<<car_id<<endl<<"car name :"<<car_name<<endl<<"car color :"<<car_color<<endl
			<<"car model:"<< car_model<<endl<<"car release year :"<<car_release_year;
			cout<<"\n-----------------------\n";
		}
		
	
};
int main(){
	Car car[50];
	int n;
	int id;
	string name;
	string color;
	string model;
    int releaseyear;
	cout<<"Enter car record system:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter car id: "<<endl;
		cin>> id;
	    cout<<"enter car company name: "<<endl;
		cin>>name;
		cout<<"enter car color: "<<endl;
		cin>>color;
		cout<<"enter car model: "<<endl;
		cin>>model;
		cout<<"enter car release year: "<<endl;
		cin>> releaseyear;
		car[i].carinfo(id,name,color,model,releaseyear);
	}
	for(int i=0;i<n;i++){
		car[i].cargetinfo();
		cout<<endl;
	}	  	
		
	return 0;
}