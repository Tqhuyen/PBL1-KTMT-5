#include<bits/stdc++.h>
using namespace std;
void check(int&a,int&b){
	if ( a>b){
		cout<<"after exchange values for a and b-->"<<b<<" "<<a;
	}
	else{
		cout<<" khong can doi";
	}
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<"values input for a and be respectively-->"<<a<<" "<<b<<endl;
	check(a,b);
}