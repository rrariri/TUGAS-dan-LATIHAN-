#include <iostream>
using namespace std; 

int main (){

	int i, k, temp, x [] = {23, 24, 24, 32, 43, 56, 12, 78, 86, 22};
	
	for (i = 0; i < 9; i++){
		for (k = 9; k > i; k--){
			if (x[k] < x [k-1]){
				temp = x[k];
				x[k] = x[k-1];
				x[k-1] = temp; 
			}
		}
	
	}
	
	cout << "| ";
	for (i=0; i < 10; i++){
		cout << x[i] << " | ";
	}
	
	return 0;
}