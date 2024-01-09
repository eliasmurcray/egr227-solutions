#include <iostream>
#include <vector>

using namespace std;

int factorial(int n) {
	return n == 0 ? 1 : n * factorial(n - 1);
}

int main() {
	int n;
	cin >> n;
	
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		nums[i] = factorial(num);
	}

	for (int i = 0; i < n; i++) {
		cout << nums[i] << " ";
	}

	return 0;
}
