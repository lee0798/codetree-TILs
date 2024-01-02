#include <iostream>
using namespace std;
int F(int n) {
    // 종료 조건
    if(n == 1)
        return 1;
    if(n == 2)
        return 1; 

    // 점화식
    return F(n - 1) +  F(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << F(n);
    return 0;
}