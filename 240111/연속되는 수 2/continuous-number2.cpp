#include <iostream>
#define N 1000
using namespace std;

int main() {
    int arr[N] = {};
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 1;
    int maxc = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
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