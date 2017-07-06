#include <iostream> 
using namespace std; 

int main () {
	
	int x [10], cari;
	bool ketemu;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Masukan Data = "; 
		cin >> x [1]; 
	}
	
	cout << "Masukan Data Yang di Cari = ";
	cin >> cari; 
	cout << endl;
	
	for (int i = 0; i < 10; i++)
	{
		if (x[i] == cari)
		{
			ketemu = true;
		} else {
			ketemu = false;
		}
	}
	
	if (ketemu == true){
		cout << "Data di Temukan" << endl;
	} else {
		cout << "Data Tidak di Temukan" << endl;
	}
	return 0;
}