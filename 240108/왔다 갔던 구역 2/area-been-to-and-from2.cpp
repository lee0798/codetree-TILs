#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int arr[200] = {};
    int a;
    cin >> a;
    int temp = 100;

    for (int i = 0; i < a; i++) {
        int st;
        char end;  
        cin >> st >> end;

        if (end == 'R') {
            arr[temp] ++;
            for(int j =0; j < st ; j ++){
                temp++;
                arr[temp]++;
            }
        } else {
            arr[temp]--;
            for(int j =0; j < st ; j ++){
                temp--;
                arr[temp]++;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < 100; i++) {
        if(arr[i] >= 2) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}