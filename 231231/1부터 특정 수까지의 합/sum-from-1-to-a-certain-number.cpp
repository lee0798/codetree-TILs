#include <iostream>
using namespace std;

int PrintRect(int n) {
    int sum = 0;
    for(int i = 0; i <= n; i++) {
        sum += i;
    }
    return sum / 10;
}

int main() {
    int num;
    cin >> num;

    int re = PrintRect(num);
    cout << re;
    return 0;
}