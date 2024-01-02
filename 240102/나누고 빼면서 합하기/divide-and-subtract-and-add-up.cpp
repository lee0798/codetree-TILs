#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> arr(a);
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }

    int sum = 0;
    while (b > 0) {
        sum += arr[b - 1];
        if (b % 2 == 1) {
            b -= 1;
        } else {
            b /= 2;
        }
    }

    cout << sum << endl;

    return 0;
}