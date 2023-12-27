#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string str ;
    int idx = 0;
    cin >> str;
    for(int i = 0 ; i < str.length(); i ++){
        if(str[i] == 'e'){
            idx = i; break;
        }
    }
    str.erase(idx,1);
    cout << str;
    return 0;
}