#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, b;
    cin >> n >> b;

    string input_str;
    cin >> input_str;

    vector<int> arr;
    for (char c : input_str) {
        arr.push_back(c - '0');
    }

    int num = 0;
    for (int i = 0; i < arr.size(); i++) {
        num = num * n + arr[i];
    }

    vector<int> digits;

    while (true) {
        if (num < b) {
            digits.push_back(num);
            break;
        }

        digits.push_back(num % b);
        num /= b;
    }

    // Print the converted number
    for (int i = digits.size() - 1; i >= 0; i--) {
        cout << digits[i];
    }

    return 0;
}