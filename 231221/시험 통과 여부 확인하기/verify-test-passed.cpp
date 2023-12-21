#include <iostream>
using namespace std;

int main() {

	int a;
	cin >> a;

	if (a >= 80) {
		cout << "pass";
	}
	else {
		cout << 80-a << " more score";
	}


	return 0;

}