#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n;
    int a;
    cin >> a;
    int digits[20] = {};
    int cnt = 0;
    
    while (true) {
        if(n < 2) {
            digits[cnt++] = n;
            break;
        }
    
        digits[cnt++] = n % a;
        n /= a;
    }
    
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];
}