#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[200] = {};
    int b;
    cin >> b;

    for (int i = 0; i < b; i++) {
        int st, end;
        cin >> st >> end;
        st += 100;
        rnd += 100;
        for (int j = st; j < end; j++) {
            arr[j]++;
        }
    }

    int max_val = *max_element(arr, arr + 201);
    cout << max_val;

    return 0;
}