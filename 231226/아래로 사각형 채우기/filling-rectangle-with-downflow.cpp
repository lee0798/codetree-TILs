#include <iostream>
using namespace std;

int main() {

	int n ;
	cin >> n;
	int arr_2d[n][n] = {};

	int num = 1;
	for (int j = 0; j < n; j++) {
		for(int i =0;i < n ; i ++){
			arr_2d[i][j] = num;
			num ++;
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