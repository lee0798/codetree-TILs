#include <iostream>
using namespace std;

int main() {

	int n ;
	cin >> n;
	int arr_2d[n][n] = {};

	int num = 1;
    int j = n-1;
    int j1 = n-1-j;
    while(j >= 0){
            if(j1 %2 ==1){
            for(int i =0;i < n ; i ++){
                arr_2d[i][j] = num;
                num ++;
                }
            }else{
            for(int i =n-1;i >= 0 ; i --){
                arr_2d[i][j] = num;
                num ++;
                }
            }
        j1 ++;
        j --;
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