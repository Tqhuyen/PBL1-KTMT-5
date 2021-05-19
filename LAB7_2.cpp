#include<bits/stdc++.h>
using namespace std;
int main(){
	string name;
	int h,count=0,s=0;
	float rate;
	cout<<"Enter name of the employee -->";
	cin>>name;
	if (name=="quit"){
		return 0;
	}
	cout<<"Enter pay rate for "<<name<<"--> ";
	cin>>rate;
	cout<<"Enter hours worked for each day up to a maximum of 14 days."<<endl;
	cout<<"Enter 0 when finished-->";cin>>h;count++;
	do {
	count++;
	cout<<endl<<"Enter hours worked or 0 to quit -->";
	cin>>h;
	s=s+h;
	}
	while(((h!=0) and (count<=14)));
	cout<<"name :"<<name<<endl;
	cout<<"tong gio :"<<s<<endl;
	if (s>80){
		cout<<"gio thuong :"<<80<<endl;
		cout<<"gio lam them :"<<s-80<<endl;
		cout<<"luong thuong:"<<80*rate<<endl;
		cout<<"luong thuong them:"<<(s*rate)-(80*rate)<<endl;
	}
	else{cout<<"gio thuong:"<<s<<endl;
		cout<<"gio lam them :"<<0<<endl;
		cout<<"luong thuong:"<<s*rate<<endl;
		cout<<"luong thuong them:"<<0<<endl;}
	cout<<"tong luong:"<<s*rate<<endl;
}