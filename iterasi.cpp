//iterasi 
#include <iostream>
using namespace std; 

void numberFunction (int i){

	cout << "The Number is : " << i << endl; 
}

	int main() {
		for (int i=0;i<10;i++){
			numberFunction (i);
		}
		return 0;
	}