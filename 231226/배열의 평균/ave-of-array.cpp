#include <iostream>
using namespace std;
#include <cctype>

int main() {

    int arr_2d[2][4];  

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr_2d[i][j];
        }
    }
    double totalsum = 0;
    double sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            sum += arr_2d[i][j];
        }
        totalsum += sum;
        sum= sum/4;
        cout << fixed;
	    cout.precision(1);
        cout << sum << " ";
        sum = 0;
    }

    cout << endl;
    for(int i =0;i < 4; i++){
        for (int j = 0;j < 2;j ++){
            sum +=arr_2d[j][i];
        }
        sum= sum/2;
        cout << fixed;
	    cout.precision(1);
        cout << sum << " ";
        sum = 0;
    }
    cout << endl;
    cout << totalsum/8;



    return 0;
}