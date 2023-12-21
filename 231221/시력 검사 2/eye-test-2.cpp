#include <iostream>
using namespace std;

int main() {

	double a;

	cin >> a;

	if (a >= 1) {
		cout << "High" << endl;
	}
	else if (a >= 0.5) {
		cout << "Middle" << endl;
	}
	else {
		cout << "Low" << endl;
	}


	return 0;

}