#include <iostream>
#include <string>


using namespace std;

bool Modify(string &s) {
    int cnt = 1;
    for(int i = 0; i < s.length()-1; i ++){
        if(s[i] != s[i + 1])
            cnt ++;
    }
    if(cnt >=2)
    return true;
    else
    return false;
}

int main() {
    string str;
    cin >> str;
    if( Modify(str))
    cout << "Yes";
    else
    cout << "No";
    return 0;
}