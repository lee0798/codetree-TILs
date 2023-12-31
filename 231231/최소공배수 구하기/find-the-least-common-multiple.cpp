#include <iostream>
using namespace std;
int gcd(int n, int m){
    if(m == 0){
        return n;
    }else{
        return gcd(m,n%m);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    int re = gcd(a,b);
    cout << (a/re) *(b/re) * re;
    return 0;
}