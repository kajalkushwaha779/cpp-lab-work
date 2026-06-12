#include<iostream>
using namespace std;
class Employee{
	private:
		int emp_id;
		string emp_name;
		int emp_age;
		string emp_role;
		float emp_salary;
		string emp_city;
	    int emp_experience;
	    string emp_company_name;
	public:
		//setter function
		void employeeinfo( int id,string name,int age,string role,float salary,string city,int experience,string companyname){
	    emp_id=id;
		emp_name=name;
		emp_age=age;
	    emp_role=role;
		emp_salary=salary;
		emp_city=city;
	    emp_experience=experience;
	    emp_company_name=companyname;	
		}
		//getter function
		void employeegetinfo(){
			cout<<"employee id :"<<emp_id<<endl<<"employee name :"<<emp_name<<endl<<"employee age :"<<emp_age<<endl
			<<"employee role:"<< emp_role<<endl<<"employee salary :"<<emp_salary<<endl
			<<"employee city:"<<emp_city<<endl<<"employee experience:"<< emp_experience	
			<<endl<<"employee company name:"<<emp_company_name;
			cout<<"\n-----------------------\n";
		}
		
	
};
int main(){
	Employee employee[50];
	int n;
	int id;
	string name;
	int age;
	string role;
	float salary;
	string city;
	int experience;
	string companyname;
	cout<<"Enter employee record number:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter employee id: "<<endl;
		cin>> id;
		cout<<"enter employee name: "<<endl;
		cin>> name;
		cout<<"enter employee age: "<<endl;
		cin>> age;
		cout<<"enter employee role: "<<endl;
		cin>>role;
	    cout<<"enter employee salary: "<<endl;
		cin>>salary;
		cout<<"enter employee city: "<<endl;
		cin>>city;
		cout<<"enter employee experience: "<<endl;
		cin>>experience;
		cout<<"enter employee company name: "<<endl;
		cin>> companyname;
		employee[i].employeeinfo(id,name,age,role,salary,city,experience,companyname);
	}
	for(int i=0;i<n;i++){
		employee[i].employeegetinfo();
		cout<<endl;
	}	  	
		
	return 0;
}