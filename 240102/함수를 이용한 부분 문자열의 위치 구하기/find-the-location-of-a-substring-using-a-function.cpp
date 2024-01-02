#include <iostream>
#include <string>

using namespace std;

bool same(string &a,  string &b, int n) {
    int n2 = b.length();
    for (int i = 0; i < n2; ++i) {
        if (a[i + n] != b[i]) {
            return false;
        }
    }
    return true;
}

int is_subsequence( string &a,  string &b) {
    int n1 = a.length();
    int n2 = b.length();

    for (int i = 0; i <= n1 - n2; ++i) {
        if (same(a, b, i)) {
            return i;
        }
    }
    return -1;
}

int main() {
    string a, b;
    cin >> a;
    cin >> b;

    int result = is_subsequence(a, b);
    cout << result << endl;

    return 0;
}