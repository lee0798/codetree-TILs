#include <iostream>
using namespace std;

int main() {

	double a,b;
	cin >> a>>b;

	if (1 <= a && b >= 1) {
		cout << "High";
	}
    else if (0.5 <= a && b >= 0.5) {
		cout << "Middle";
	}
	else {
		cout << "Low";
	}

	return 0;

}