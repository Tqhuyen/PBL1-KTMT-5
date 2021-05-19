#include<bits/stdc++.h>
using namespace std;
// hàm xuất ID và tên
void xuat(string*a,string*b,int begin, int end){//tạo 2 con trỏ string
	for(int i = begin;i<=end;i++){// định vị vị trí của biến bằng 2 con trỏ rồi xuất
		cout<<*(a+i)<<endl;
		cout<<*(b+i)<<endl;
	}
}
//hàm đổi 2 chuỗi
void swap(string*a, string*b){
	string tmp =*a;
	*a="";
	*a=*b;
	*b="";*a=tmp;
}
// hàm sắp xếp nổi bọt
void sort(string*a,string*b, int begin, int end){
	if(begin==end-1){
		return ;
	}
	else {
	string min = *(a+begin);
	
	int index = begin;
	for (int i=begin;i<end;i++){
		string tmp = *(a+i);
		if ((tmp.compare(min))<0){
			min =*(a+i);
			index=i;
		}
	}
	cout<<"min la: "<<min<<endl;
	swap(*(a+index),*(a+begin));
	swap(*(b+index),*(b+begin));
	sort(a,b,begin+1, end);
	}
}
// hàm chính  
int main(){
	int n;
	cout<<"nhap so sinh vien :";
	cin>>n;
	string A[n],B[n];
	// nhap sinh vien
	for (int i =0 ; i<n;i++){
		cin.ignore();// xóa bộ nhớ đệm dấu enter
		cout<<"nhap ten sinh vien :"<<endl;
		getline(cin, A[i]);
		cout<<"nhap ID cua "<<A[i]<<" :"<<endl;
		cin>>B[i];
	}
	
	//xuat ten va ID nhung dung ham
	xuat(A,B,0,n-1);
	// thuc hien sap xep
	sort(A,B,0,n);
	// xuat ten va ID
	cout<<"================================="<<endl;
	for (int i =0;i<n;i++){
		cout<<"ID: "<<B[i]<<endl;
		cout<<"Ten:"<<A[i]<<endl;
	}
}