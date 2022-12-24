#include <iostream>
using namespace std;

void revArray(int numArray[], int n) {
	for (int i = 0; i < n; i++) {
		cout << numArray[i] << ",";
	}
	cout << "\n";
	for (int j = n-1; j >= 0; j--) {
		cout << numArray[j] << ",";
	}
}

int main() {

	int numArray[]={1,3,5,7,8,9};
	int n=6;

	revArray(numArray,n);


	return 0;
}
