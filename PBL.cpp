#include<bits/stdc++.h>
using namespace std;
struct linkedlist{
	int m;
	linkedlist *next;
};
class khachhang{
	private:
		string ten, ho ,sdt;
		int stt;
	public:
		khachhang(int stt){
		cout<<"khach hang ne:";
		}
};
class thucdon{
	int somon;
	protected:
		struct mon{
			string ten;
			string gia;
		};
		mon a[20];// giới hạn số món là 20 món , sau này dùng linkedlist để mở rộng
	public:
	
		thucdon(){
			cout<<"nhap so mon hom nay :";
			cin>>somon;
			}
	
	void nhap(){
			cin.ignore();
			cout<<"lan luot nhap cac mon hom nay va gia"<<endl;
			for (int i=0; i<somon;i++){
				cout<<"mon: ";getline(cin, a[i].ten);
				cout<<"gia: ";getline(cin, a[i].gia);
			}
	}
	void xuat(){
		cout<<"Hom nay nha hang co cac mon sau :"<<endl;
		for (int i=0;i<somon;i++){
			cout<<"mon: "<<a[i].ten;
			cout<<" "<<a[i].gia<<"VND"<<endl;
		}
	}
};
void tdon(){
		char c;
		thucdon menu;
		menu.nhap();
		cout<<endl;
		do{
			cout<<"Bam phim 1 de xem lai thuc don, phim 2 de thoat: ";
			cin>>c;
			if(c=='1'){
				menu.xuat();
				continue;
			}
				
		} while(c!='2');
		system("CLS");//xóa màn hình
		}

int main(){
	char a; // nhập vào kí tự cho a
	do{

		cout<<"=========nha hang========"<<endl;
		cout<<"hay chon so de chon tinh nang"<<endl;
		cout<<"1. soan thuc don cho ngay hom nay"<<endl;
		cout<<"bam phim 'c' de thoat chuong trinh"<<endl;
		cin>>a;
		switch(a){
			case '1':{
				tdon();
				break;
			}
		}
	} while (a!='c'); // khi mà a nhận được là 'c' thì thoát
}