#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
    int employee_id;
    string name;
    float salary;

public:
    void setEmployee(int id, string n, float s){
        employee_id = id;
        name = n;
        salary = s;
    }
    void display(){
        cout << "\nEmployee ID: " << employee_id;
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary;
    }
    Employee(){
	}
	Employee(int id, string n, float s){
		employee_id = id;
        name = n;
        salary = s;
	}
};

class FullTimeEmployee : public Employee{
private:
    float bonus;

public:
    FullTimeEmployee(int id, string n, float s, float b):Employee(id, n, s){
        bonus = b;
    }
    void display(){
        Employee::display();
        cout << "\nBonus: " << bonus << endl;
    }
};

class PartTimeEmployee : public Employee{
private:
    int hours_worked;

public:
   PartTimeEmployee(int id, string n, float s, int h):Employee(id, n, s){
        hours_worked = h;
    }

    void display(){
        Employee::display();
        cout << "\nHours Worked: " << hours_worked << endl;
    }
};

  int main(){
    cout << "\nEmployee Details:\n";
    FullTimeEmployee *emp1= new FullTimeEmployee(101, "Rahul", 50000, 5000);
    emp1->display();
    PartTimeEmployee *emp2= new PartTimeEmployee(103, "Rina", 80000, 7000);
    emp2->display();
    delete emp1;
    delete emp2;
    return 0;
}