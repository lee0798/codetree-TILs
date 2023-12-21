#include <iostream>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	b = a > b ? a : b;

	cout << b;
	return 0;

}