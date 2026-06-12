#include<iostream>
using namespace std;
class Customer{
	private:
        int cust_id;
		string cust_name;
		int cust_age;
	    string cust_city;
	    string cust_mobile_number;
	    int cust_simcard_validity;
	    string cust_telecom_brand_name;
	public:
		//setter function
		void custinfo( int id,string name,int age,string city,string mobile_number,int simcard_validity,string brand_name){
        cust_id=id;
		cust_name=name;
		cust_age=age;
	    cust_city=city;
	    cust_mobile_number=mobile_number;
	    cust_simcard_validity=simcard_validity;
	    cust_telecom_brand_name=brand_name;
		}
		//getter function
		void custgetinfo(){
			cout<<"customer id :"<<cust_id<<endl<<"customer  name :"<< cust_name<<endl<<"customer  age :"<< cust_age<<endl<<"customer  city :"<< cust_city<<endl<<"customer mobile number :"<< cust_mobile_number<<endl<<"customer simcard validity"<<cust_simcard_validity<<endl<<"customer telecom brand name"<<cust_telecom_brand_name;
			cout<<"\n-----------------------\n";
		}
		
	
};
int main(){
	Customer customer[50];
	int n;
	int id;
	string name;
	int age;
    string city;
	string mobile_number;
	int simcard_vaildity;
	string brand_name;

	cout<<"Enter customer record system:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter customer id: "<<endl;
		cin>> id;
	    cout<<"enter customer name: "<<endl;
		cin>>name;
		cout<<"enter customer age: "<<endl;
		cin>> age;
		 cout<<"enter customer city: "<<endl;
		cin>>city;
		cout<<"enter customer moblie number: "<<endl;
		cin>> mobile_number;
	    cout<<"enter customer simcard vaildity: "<<endl;
		cin>>simcard_vaildity;
		cout<<"enter customer telecom brand name: "<<endl;
		cin>> brand_name;
		customer[i].custinfo(id,name,age,city,mobile_number,simcard_vaildity,brand_name);
	}
	for(int i=0;i<n;i++){
		customer[i].custgetinfo();
		cout<<endl;
	}	  	
		
	return 0;
}