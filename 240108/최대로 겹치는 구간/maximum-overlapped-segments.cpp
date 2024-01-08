#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[100] = {};
    int b;
    cin >> b;

    for (int i = 0; i < b; i++) {
        int st, end;
        cin >> st >> end;
        for (int j = st; j < end; j++) {
            arr[j]++;
        }
    }

    int max_val = *max_element(arr, arr + 101);
    cout << max_val;

    return 0;
}