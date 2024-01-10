#include <iostream>
#include <vector>
#include <algorithm>

using std::cin, std::cout, std::vector, std::sort;

int main() {
	vector<double> scores;
	
	double n;
	cin >> n;
	while(n >= 0) {
		scores.push_back(n);
		cin >> n;
	};

	sort(scores.begin(), scores.end());

	double range = scores[scores.size() - 1] - scores[0];

	double mean = 0;
	for (int i = 0; i < scores.size(); i++) {
		mean += scores[i];
	}
	mean /= (double) scores.size();

	double median = scores.size() % 2
		? scores[scores.size() / 2]
		: (scores[scores.size() / 2 - 1] + scores[scores.size() / 2]) / 2.;
	
	cout << "Mean: " << mean << "\nMedian: " << median << "\nRange: " << range << "\n";

	return 0;
}
