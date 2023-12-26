#include <iostream>
using namespace std;

int main() {

	int a ;
    cin >> a;

	for (int i = 1; i <= a; i++) {
		if (i % 2 == 0 || i %3 == 0) {
			cout << 1 <<" ";
		}
		else {
			cout << 0 <<" ";
		}
	}

	return 0;

}