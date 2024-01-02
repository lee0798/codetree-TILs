#include <iostream>
using namespace std;

int Fact(int n) {
    if(n==1)
        return 0;

    if(n %2 == 1)
        return Fact(n/3) + 1;

    return Fact(n /2) + 1;
}

int main() {
    int n;
    cin >> n;
    cout << Fact(n);
    return 0;
}