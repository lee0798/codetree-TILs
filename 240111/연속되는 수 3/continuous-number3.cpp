#include <iostream>
#define N 1000
using namespace std;

int main() {
    int arr[N] = {};
    bool arr1[N] = {};
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] < 0){
            arr1[i] = false;
        }else{
            arr1[i] = true;
        }
    }

    int cnt = 1;
    int maxc = 0;

    for (int i = 1; i < n; i++) {
        if (arr1[i] == arr1[i - 1]) {
            cnt++;
        } else {
            if (cnt > maxc) {
                maxc = cnt;
            }
            cnt = 1;
        }
    }
    if (cnt > maxc) {
        maxc = cnt;
    }

    cout << maxc;

    return 0;
}