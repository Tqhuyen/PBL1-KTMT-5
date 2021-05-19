#include<bits/stdc++.h>
using namespace std;
class hcn {
	private:
		int d,r,s,c;
	public:
		void nhap(){
			cout<<"lan luot nhap vao chieu dai va rong :"<<endl; 
			cin>>d>>r;
		}
		int dtich(){
			return s=d*r;
		}
		int cvi(){
			return c=(d+r)*2;
		}
};
int main(){
	hcn h1;
	h1.nhap();
	cout<<"==================================="<<endl;
	cout<<"dien tich la: "<<h1.dtich()<<endl;
	cout<<"chu vi la: "<<h1.cvi()<<endl;
}