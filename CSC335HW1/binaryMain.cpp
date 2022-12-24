#include <iostream>
using namespace std;

int binarySearch(int arr[], int sizeArray, int index) {
	int low = 0;
	int high = sizeArray - 1;
	int mid = (low + high) / 2;


	while (low <= high)
	{
		if (index == arr[mid]) {
			cout << mid;
		}
		else if (index > arr[mid]) {
			return low = mid + 1;
		}
		else  (index < arr[mid]);
			return high = mid - 1;	
	}
	return -1;
}
int main() {
	
	int numbers[] = { 5,24,36,9,41,52,11,22,81,17 };

	int result = binarySearch(numbers, 10, 9);
	
	if (result >= 0) {
		cout << " The number " << numbers[result] << " was at index " << result;
	}
	else {
		cout << " Number " << result << " could not be found! ";
	}

	return 0;
}

