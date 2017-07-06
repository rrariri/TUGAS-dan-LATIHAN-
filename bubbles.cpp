#include <iostream>
using namespace std; 

int main (){

	int i, k, temp, n;
	//cout<<"Tentukan bilangan yang ingin di input : "; cin>>n;
	int x [100];
	
	/*for (i=1; i < n+1; i++){
		cout<<"Masukan data ke " <<i<<" : ";
		cin >> x[i] ;
	
	} */
	
	for (i=0; i < 100; i++){
		x[i]=i+1 ;
	}
	
for (i = 0; i < 100; i++){
		for (k = 99; k > i; k--){
			if (x[k] < x [k-1]){
				temp = x[k];
				x[k] = x[k-1];
				x[k-1] = temp; 
			}
		}
	
	}
	
	cout << "| ";
	for (i=0; i < 100; i++){
		cout << x[i] << " | ";
	}
	
	return 0;
}