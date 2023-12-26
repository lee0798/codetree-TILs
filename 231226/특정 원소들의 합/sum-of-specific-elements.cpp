#include <iostream>
using namespace std;

int main() {

	int arr_2d[4][4];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> arr_2d[i][j];
		}
	}
    int sum = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j <= i; j++) {
			sum += arr_2d[i][j];
		}
	}
    cout << sum << endl;
    

	return 0;

}