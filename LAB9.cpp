#include<bits/stdc++.h>
using namespace std;
int giaithua(int a){
	if (a==1){
		return 1;
	}
	else {
		return a*giaithua(a-1);
	}
}
int main(){
	int a;
	cin>>a;
	cout<<giaithua(a);
}