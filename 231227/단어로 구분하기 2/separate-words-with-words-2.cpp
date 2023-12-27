#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    n =10;

	string *arr = new string[n];


	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i+=2) {
        cout << arr[i] << endl;
	}


	return 0;

}