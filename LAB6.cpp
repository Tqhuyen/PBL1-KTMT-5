#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,max,min,s=0,count=1;
	cout<<"Enter a number or enter a negative number to quit-->";
	cin>>a;
	max=a;min=a;
	while (a>=0){
		cout<<endl<<"Enter a number or enter a negative number to quit-->";
	
		if ( a>max){
			max=a;
		}
		if (a<min){
			min=a;
		}
		s=s+a;
		count++;
		cin>>a;
	}
	cout<<endl<<"Average :"<<s/count;
	cout<<endl<<"Largest number entered is:"<<max;
	cout<<endl<<"Smallest number entered is: "<<min;
	
}