#include <iostream>
using namespace std;
int main() {
    int a,b;
    int a1,b1;
    cin >> a >> b >> a1 >> b1;
    if(a > a1){
        cout << "A";
    }else if(a < a1){
        cout << "B";
    }else{
        if(b >b1){
            cout << "A";
        }else{
            cout << "B";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}