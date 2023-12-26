#include <iostream>
using namespace std;

int main() {

	int a,b;
    cin >> a >> b;
	int arr_2d[a][b] = {};
    int arr_2d1[a][b] = {};
	int num = 1;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> arr_2d[i][j];
		}
	}
    for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> arr_2d1[i][j];
		}
	}

	// 출력
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << !(arr_2d[i][j]==arr_2d1[i][j]) << " ";
		}
		cout << endl;
	}

	return 0;

}