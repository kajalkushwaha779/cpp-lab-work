#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter array size: ";
	cin>>n;
	int a[n];
		cout<<"Enter array element: "<<endl;
		for(int i=0;i<n;i++){
			cout<<"a["<<i<<"] = ";
			cin>>a[i];
		}
		cout<<"\noutput :"<<endl;
		cout<<"Even element of an array : ";
				for(int i=0;i<n;i++){
					if(a[i]%2==0){
					cout<<a[i]<<",";
					}
				}
		return 0;
	
}