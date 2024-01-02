#include <iostream>

using namespace std;

int Sequence(int a) {
    if(a == 1)
        return 2;
    if(a == 2)
        return 4;

    return (Sequence(a - 1) * Sequence(a - 2)) % 100;
}

int main() {
    int n;
    cin >> n;

    cout << Sequence(n);

    return 0;
}