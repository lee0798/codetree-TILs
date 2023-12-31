#include <iostream>
using namespace std;

bool IsMagicNumber(int n) {
    int temp1 = n /10;
    int temp2 = n % 10;
    return n % 2 == 0 && (temp1 + temp2) % 5 == 0;
}

int main() {
    int cnt = 0;
    cin >> cnt;

    if(IsMagicNumber(cnt)){
        cout << "Yes";
    }else{
        cout << "No";
    }
    return 0;
}