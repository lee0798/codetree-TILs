#include <iostream>
using namespace std;

int main() {

	int a;

	cin >> a;

	if (a < 0) {
		cout << "ice" << endl;
	}
	else if (a < 100) {
		cout << "water" << endl;
	}
	else {
		cout << "vapor" << endl;
	}


	return 0;

}