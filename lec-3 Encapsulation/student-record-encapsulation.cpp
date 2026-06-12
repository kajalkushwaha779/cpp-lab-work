#include<iostream>
using namespace std;
class Student{
	private:
        int stu_id;
		string stu_name;
		int stu_age;
		string stu_course;
	    string stu_city;
	    string stu_email;
	    string stu_college;
	public:
		//setter function
		void studentinfo( int id,string name,int age,string course,string city,string email,string college){
        stu_id=id;
		stu_name=name;
		stu_age=age;
		stu_course=course;
	    stu_city=city;
	    stu_email=email;
	    stu_college=college;	
		}
		//getter function
		void studentgetinfo(){
			cout<<"student id :"<<stu_id<<endl<<"student name :"<<stu_name<<endl<<"student age :"<<stu_age<<endl
			<<"student course:"<< stu_course<<endl<<"student city :"<<stu_city<<endl<<"student email :"<<stu_email<<endl<<"student college"<<stu_college;
			cout<<"\n-----------------------\n";
		}
		
	
};
int main(){
	Student student[50];
	int n;
	int id;
	string name;
	int age;
	string course;
	string city;
	string email;
	string college;

	cout<<"Enter student record system:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter student id: "<<endl;
		cin>> id;
	    cout<<"enter student name: "<<endl;
		cin>>name;
		cout<<"enter student age: "<<endl;
		cin>> age;
	    cout<<"enter student course: "<<endl;
		cin>>course;
		cout<<"enter student city: "<<endl;
		cin>> city;
	    cout<<"enter student email: "<<endl;
		cin>>email;
		cout<<"enter student college: "<<endl;
		cin>> college;
		student[i].studentinfo(id,name,age,course,city,email,college);
	}
	for(int i=0;i<n;i++){
		student[i].studentgetinfo();
		cout<<endl;
	}	  	
		
	return 0;
}