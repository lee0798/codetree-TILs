#include <iostream>
using namespace std;
int fun(int a,int b, int c){
    int temp = min(a,b);
    int m = min(temp, c);
    return m;
}


int main() {
    // 여기에 코드를 작성해주세요.
    int x,y,z;
    cin >> x >> y >> z;
    cout << fun(x,y,z);
    return 0;
}