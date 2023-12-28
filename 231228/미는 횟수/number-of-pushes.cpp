#include <iostream>
using namespace std;
#include <string>
int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin >> a >> b;
    for(int i = 0;i < a.length() ; i ++){
        if(a == b){
            cout << i;
            break;
        }else if(i == a.length() - 1){
            cout << -1;
        }else{
            a = a.substr(a.length() -1, 1) + a.substr(0, a.length() - 1);
        }

    }
    return 0;
}