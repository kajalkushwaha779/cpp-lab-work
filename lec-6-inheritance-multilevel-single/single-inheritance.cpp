#include<iostream>
using namespace std;
 class X{
	 private:
		int a,b,c;	
	 public:
		void setdata(){
			cout<<"Enter three integers:\n";
			cin>> a >> b >> c;
		}
		int sumdata(){
			return (a*a*a)+(b*b*b)+(c*c*c);
		}		
    };
 class Y : public X {
 	  public:
	     void getdata(){
			cout<<"\nThe sum of cubes is:\n"<<sumdata()<<endl;
	      }
    };
 int main(){
	Y s1;
	s1.setdata();
	s1.getdata();
	
	return 0;	
} 