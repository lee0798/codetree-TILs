#include <iostream>
using namespace std;

int fun(int x, int y){
    int cnt = 0;
    for(int i = x; i <=y ; i ++){
        if(i %2 !=0 && i % 10 != 5 && (i % 3 != 0 || i % 9 == 0))
            cnt ++;
    }
    return cnt;

}

int main() {
    int a,b;
    cin >> a >> b;
    cout << fun(a,b);

    // 여기에 코드를 작성해주세요.
    return 0;
}