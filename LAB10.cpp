#include <iostream> 
#include <fstream> 
using namespace std; 
int main() {
 //doc file nam.txt
fstream f;                    
	f.open("nam.txt", ios::in);
	string data;                  
	getline(f, data);             
	f.close();                  
	cout << data;
// ghi them du lieu vao file
	fstream h;   
	h.open("tho.txt", ios::out);
    string da = "Nam quoc son ha nam de cu"
	              "Tiet nhien dinh phan tai thien";
	h << da;   
	h.close();
	return 0;
 //-----------------------------------
 char infilename[30], outfilename[30]; 
 cout << "Enter file name to copy from: "; cin>>infilename; 
 cout << "Enter file name to copy to: "; cin>>outfilename; 
 ifstream infile; ofstream outfile; 
 infile.open(infilename); 
 outfile.open(outfilename); 
char inc; 
 infile.get(inc); 
while(!infile.eof()) 
 { 
 
 infile.get(inc); 
 cout <<inc; 
 outfile << inc; 
}
infile.close(); 
 outfile.close(); 
return 0; 
}
