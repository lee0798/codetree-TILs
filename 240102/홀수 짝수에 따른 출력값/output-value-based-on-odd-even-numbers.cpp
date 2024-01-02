#include <iostream>
using namespace std;

int Fact(int n) {
    if(n == 1)
        return 1;
    if(n == 2)
    return 2;
    return Fact(n - 2) + n;
}

int main() {
    int n;
    cin >> n;
    cout << Fact(n);
    return 0;
}