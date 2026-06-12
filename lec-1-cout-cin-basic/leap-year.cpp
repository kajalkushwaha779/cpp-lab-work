#include<iostream>
using namespace std;
int main(){
	int start,end,a[100],j=0;
	cout<<"Enter first year: ";
	cin>>start;
	cout<<"Enter end year: ";
	cin>>end;
	for (int i=start;i<=end;i++){
		if((i % 4 == 0 && i % 100 != 0)||(i % 400 == 0)){
			a[j]=i;
			j++;
		}	
	}
	for(int i=0;i<j;i++){
       cout<<a[i]<<",";
			
	}
	return 0;
}