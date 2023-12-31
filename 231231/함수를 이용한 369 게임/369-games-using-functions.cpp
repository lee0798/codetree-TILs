#include <iostream>
using namespace std;


bool Contains369(int n) {
    // 계속 10으로 나눠주며
    // 일의 자리를 조사합니다.
    while(n > 0) {
        if(n % 10 == 3 || n % 10 == 6 || n % 10 == 9)
            return true;
        n /= 10;
    }

    return false;
}
bool AllDifferent(int n) {
    return n % 3 == 0 || Contains369(n);
}


int main() {
    int a,b;
    int cnt = 0;
    cin >> a >> b;
    for(int i = a; i <= b ; i ++){
        if(AllDifferent(i))
            cnt ++;
    }
    cout << cnt;
    return 0;
}