#include<bits/stdc++.h>
using namespace std;
int main(){
	int age;
	do{
		cout<<"enter your age :"<<endl;
		cin>>age;
		if(age>0){
			cout<<"good age"<<endl;
		}
		else {
			cout<<"bad age"<<endl;
		}
	}
	while(age>0);
}