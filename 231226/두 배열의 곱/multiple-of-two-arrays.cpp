#include <iostream>
using namespace std;

int main() {

	int n = 3;
	int arr_2d[3][3] = {};
    int arr_2d1[3][3] = {};
	int num = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr_2d[i][j];
		}
	}
    for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr_2d1[i][j];
		}
	}

	// 출력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr_2d[i][j]*arr_2d1[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}