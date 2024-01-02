#include <iostream>

using namespace std;

int Sequence(int a) {
    if(a == 1)
        return 1;
    if(a == 2)
        return 2;

    return (Sequence(a/3) + Sequence(a - 1));
}

int main() {
    int n;
    cin >> n;

    cout << Sequence(n);

    return 0;
}