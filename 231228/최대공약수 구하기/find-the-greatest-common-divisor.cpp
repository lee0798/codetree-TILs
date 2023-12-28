#include <iostream>
using namespace std;
void gcd(int n, int m){
    if(m == 0){
        cout << n;
    }else{
        gcd(m,n%m);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    cin >> a >> b;
    gcd(a,b);
    return 0;
}