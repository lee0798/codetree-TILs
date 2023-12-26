#include <iostream>
using namespace std;

int main() {

	int n ;
    cin >> n;
	int arr_2d[n][n] = {};

	// 1. 첫 번째 행에 전부 숫자 1을 채웁니다.
	for (int j = 0; j < n; j++) {
		arr_2d[0][j] = 1;
	}
    for (int i =0; i < n ; i ++){
        arr_2d[i][0] = 1;
    }

	// 2. 두 번째 행부터 마지막 행까지 전부 숫자를 채웁니다.
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			arr_2d[i][j] = arr_2d[i - 1][j] + arr_2d[i][j - 1] + arr_2d[i-1][j-1];
		}
	}

	// 출력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr_2d[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}