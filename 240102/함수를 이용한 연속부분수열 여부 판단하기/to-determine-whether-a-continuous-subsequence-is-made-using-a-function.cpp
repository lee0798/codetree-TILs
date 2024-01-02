#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a(n1);
    vector<int> b(n2);

    for (int i = 0; i < n1; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n2; ++i) {
        cin >> b[i];
    }
    auto is_same = [&](int n) {
        for (int i = 0; i < n2; ++i) {
            if (a[i + n] != b[i]) {
                return false;
            }
        }
        return true;
    };

    auto is_subsequence = [&]() {
        for (int i = 0; i <= n1 - n2; ++i) {
            if (is_same(i)) {
                return true;
            }
        }
        return false;
    };

    if (is_subsequence()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}