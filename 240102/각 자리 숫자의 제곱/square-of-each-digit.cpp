#include <iostream>
using namespace std;
#include <cmath>
int Fact(int n) {
    if(n <10)
        return pow(n,2);

    return Fact(n/10) + pow(n%10,2);
}

int main() {
    int n;
    cin >> n;
    cout << Fact(n);
    return 0;
}