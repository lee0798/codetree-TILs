#include <iostream>
using namespace std;

int main() {

	int a,b ;
	cin >> a >> b;
	int arr_2d[a][b] = {};

	int num = 0;
    int j = 0;
    while(j < b){
            if(j %2 ==0){
            for(int i =0;i < a ; i ++){
                arr_2d[i][j] = num;
                num ++;
            }
        }
        else{
            for(int i =a-1;i >= 0 ; i --){
                arr_2d[i][j] = num;
                num ++;
            }
        }
        j ++;
    }

	// 출력
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << arr_2d[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}