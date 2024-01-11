#include <iostream>

using std::cin;
using std::cout;

int main() {
	int numElements;
	int *maxPtr = nullptr;

	cout << "Enter number of participants: ";
	cin >> numElements;

	if (numElements <= 0) {
		cout << "Num elements must be at least 1\n";
		return 1;
	}

	maxPtr = (int *) malloc(numElements);
	
	cout << "Enter " << numElements << " elements separated by spaces: ";
	for (size_t i = 0; i < numElements; i++) {
		cin >> maxPtr[i];
	}

	int* max = &maxPtr[0];
	for (size_t i = 0; i < numElements; i++) {
		*max = maxPtr[i] > *max ? maxPtr[i] : *max;
	}

	cout << "The maximum value is: " << *max << "\n";
}
