#include <iostream>
using namespace std;
int fun(int n){
    if(n == 1)return 0;
    if(n%2 == 0){
        return fun(n/2) + 1;
    }else{
        return fun(3*n +1) + 1;
    }

}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}