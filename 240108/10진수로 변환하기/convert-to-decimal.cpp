#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string binary;
    cin >> binary;
    int n = stoi(binary);
    int num = 0;

    for (int i = 0; i < binary.length(); i++) {
        num += (pow(2, i) * (n % 2));
        n /= 2;
    }

    cout << num;

    return 0;
}