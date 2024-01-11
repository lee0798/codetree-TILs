#include <iostream>
#define N 1000
using namespace std;

int main() {
    int arr[N] = {};
    int n ,t;
    cin >> n >> t;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int cnt = 0;
    int maxc = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > t) {
            cnt++;
        } else {
            if (cnt > maxc) {
                maxc = cnt;
            }
            cnt = 0;
        }
    }
    if (cnt > maxc) {
        maxc = cnt;
    }

    cout << maxc;

    return 0;
}