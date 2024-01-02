#include <iostream>
using namespace std;
int fun(int x){
    if(x < 10){
        return x;
    }
    return fun(x/10) + x%10;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;
    cout << fun(a*b*c);
    return 0;
}