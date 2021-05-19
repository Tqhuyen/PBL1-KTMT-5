#include<bits/stdc++.h>
using namespace std;
// hàm xuất sdt và tên
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
// hàm sắp xếp nổi bọt dãy string
// cài đặt dưới dạng đệ quy
void sort(string*a,string*b, int begin, int end){
	if(begin==end-1){// điểm thoát cho đệ quy
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
	swap(*(a+index),*(a+begin));// đổi vị trí phần tử nhỏ nhất và phần tử đầu tiên
	swap(*(b+index),*(b+begin));// đổi cả ID
	sort(a,b,begin+1, end);// gọi lại hàm với một phần tử nhỏ nhất đã được đẩy lên đầu
	}
}
// hàm tìm kiếm 
int timkiem(string*a,string*b,string c,int begin, int end) {
	int mid = (begin+end)/2;
	string midstr = *(a+mid);
	if(c.compare(midstr)==0){
		return mid;
	}
	else if(c.compare(midstr)>0){
		return timkiem(a,b,c,mid+1, end);
	}
	else{
		return timkiem(a,b,c,begin,mid-1);
	}
}
// hàm chính  
int main(){
	// nhap dia chi
	int n;
	cout<<"nhap so nguoi :";
	cin>>n;
	string A[n],B[n];
	// nhap dia chi
	for (int i =0 ; i<n;i++){
		cin.ignore();// xóa bộ nhớ đệm dấu enter
		cout<<"nhap ten :"<<endl;
		getline(cin, A[i]);
		cout<<"nhap so dien thoai cua "<<A[i]<<" :"<<endl;
		cin>>B[i];
	}
	
	//xuat ten va SDT nhung dung ham
	//xuat(A,B,0,n-1);
	// thuc hien sap xep
	sort(A,B,0,n);
	// xuat ten va SDT
	cout<<"================================="<<endl;
	for (int i =0;i<n;i++){
		cout<<i+1<<" ";
		cout<<"Ten:"<<A[i]<<" ";
		cout<<",SDT: "<<B[i]<<endl;
	}
	cout<<"Nhap ten de tim kiem, bam 'thoat' de thoat: ";
	string tim;
	cin>>tim;
	int i;
	while(tim.compare("thoat")!=0){
		i = timkiem(A,B,tim,0,n-1);
		cout<<A[i]<<" so thu tu của "<<A[i]<<" la: "<<i<<",SDT la :"<<B[i]<<endl;
		cout<<"Nhap ten de tim kiem, bam 'thoat' de thoat: ";
		cin>>tim;
	}
	
}