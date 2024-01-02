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

    vector<int> m(b), n(b);
    for (int i = 0; i < b; ++i) {
        cin >> m[i] >> n[i];
    }

    for (int i = 0; i < b; ++i) {
        int sum = 0;
        for (int j = m[i] - 1; j < n[i]; ++j) {
            sum += arr[j];
        }
        cout << sum << endl;
    }

    return 0;
}