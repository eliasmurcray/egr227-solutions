#include <iostream>
#include <string>

using namespace std;

struct Movie {
	string title;
	int year;
};

Movie m = { "Avengers", 2019 };
Movie* ptr = &m;

int main() {
	cout << m.title << " " << m.year << "\n";
	ptr->title = "Shrek";
	ptr->year = 2001;
	cout << m.title << " " << m.year << "\n";
	return 0;
}
