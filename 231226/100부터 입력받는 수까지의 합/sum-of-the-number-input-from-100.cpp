#include <iostream>
using namespace std;

int main() {

	int a;
	cin >> a ;
    int sum = 0;
	for (int i = a; i <= 100; i++) {
		sum += i;
	}
	cout << sum;
	return 0;

}