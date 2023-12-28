#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    char c;
    cin >> c;
    if(c == 'a'){
        cout << 'z';
    }else{
        cout << (char)(c-1);
    }
    return 0;
}