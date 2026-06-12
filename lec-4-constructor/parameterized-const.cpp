#include<iostream>
using namespace std;

class Companies{
	private:
		int com_id;
		string com_name;
		int com_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds;
		int comp_export_diamonds;
		string comp_ceo;
	
	public:
		//constructor
		Companies(){	
		}
		Companies(int id,string name,int staff,int revenue,int import,int export_diamond,string ceo){
			com_id=id;
			com_name=name;
			com_staff_quantity=staff;
			comp_revenue=revenue;
			comp_import_raw_diamonds=import;
			comp_export_diamonds=export_diamond;
			comp_ceo=ceo;
			
		}
		
		//getter function
		void getComInfo(){
			cout<<"Company ID :"<<com_id<<endl<<"Company Name :"<<com_name<<endl<<" Company Staff Quantity :"<<com_staff_quantity<<endl
			<<" Company Revenue :"<<comp_revenue<<endl<<"Company Import Raw Diamonds :"<<comp_import_raw_diamonds<<endl
			<<"Company Export Raw Diamonds :"<<comp_export_diamonds<<endl<<"Company CEO Name :"<<comp_ceo<<endl;
			cout<<"-----------------"<<endl;
	}	
};

int main(){
	int n;
	cout<<"Enter Number of records to be insert : ";
	cin>>n;
	Companies company[n];
	int id,staff,revenue,import,expo;
	string name,ceo;

	for(int i=0;i<n;i++){
		cout<<endl<<"Enter Company ID :";
		cin>>id;
		cout<<endl<<"Enter Company Name :";
		cin>>name;
		cout<<endl<<"Enter Company Staff Quantity :";
		cin>>staff;
		cout<<endl<<"Enter Company Revenue :";
		cin>>revenue;
		cout<<endl<<"Enter Company Import Raw Diamonds :";
		cin>>import;
		cout<<endl<<"Enter Company Export Raw Diamonds :";
		cin>>expo;
		cout<<endl<<"Enter Company CEO Name :";
		cin>>ceo;
		cout<<endl;
		company[i]=Companies(id,name,staff,revenue,import,expo,ceo);
	}
	for(int i=0;i<n;i++){
		company[i].getComInfo();
	}
	
	
	return 0;
	
}