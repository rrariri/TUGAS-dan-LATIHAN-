#include <iostream>		
#include <string.h>		
using namespace std; 
 
 
typedef struct { 
	int hari; 
 	string bulan; 
 	int tahun; 
} tanggal; 
 
 
int main () {  
 	tanggal a; 
 	cout << "Masukan Tanggal : ";cin >> a.hari; 
 	cout << "Masukan Bulan : ";cin >> a.bulan; 
 	cout << "Masukan Tahun : ";cin >> a.tahun; 
 	cout << "-------------------"; 
 	cout << a.hari <<" "<<a.bulan<<" "<<a.tahun; 
 	cout << "-------------------"; 
 	cout << a; 
 	cin.get(); 
 	return 0; 
} 
