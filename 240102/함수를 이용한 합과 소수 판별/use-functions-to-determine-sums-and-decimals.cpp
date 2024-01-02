#include <iostream>
using namespace std;

int fun(int x, int y){
    int cnt1 = 0;
    int cnt = 0;
    for(int i = x; i <=y ; i ++){
        for(int j = 2; j < i; j ++){
            if(i % j == 0)
                cnt ++;
        }
        if(cnt == 0 && i %2 == 0){
            cnt1++;
        }
        cnt  = 0;
        
    }
    return cnt1;

}

int main() {
    int a,b;
    cin >> a >> b;
    cout << fun(a,b);

    // 여기에 코드를 작성해주세요.
    return 0;
}