#include<iostream>
using namespace std;
 class P{
 	private:
 		float temperature;
 	public:
 		void settemp(){
		 cout<<"Enter celsius Temperature:\n";
			cin>>temperature;
		}
		float gettemp(){
			return temperature;
		}
 };
 class Q:public P{
 	private:
 		float fehrenheit;
 	public:
 		void tofehrenheit(){
 			fehrenheit=( gettemp()* 9/5 )+32;
		    cout<<"fehrenheit:\n"<<fehrenheit<<endl;
		}
		float getfehrenheit(){
			return fehrenheit;
		} 
 };
  class R:public Q{
 	public:
 		float kelvin;
 		void tokelvin(){
 			kelvin=((getfehrenheit()-32)*5/9)+273.15;
		    cout<<"kelvin:\n"<<kelvin<<endl;
		}
		float getfehrenheit(){
			return kelvin;
		}
 	
 };
 int main(){
 	R hm;
 	hm.settemp();
 	hm.tofehrenheit();
 	hm.tokelvin();
 	
 	return 0;
}