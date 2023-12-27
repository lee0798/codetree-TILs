#include <iostream>
#include <string>
using namespace std;

int main() {

	string arr;
	cin >> arr;
	int len = arr.length();

	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}

	return 0;

}