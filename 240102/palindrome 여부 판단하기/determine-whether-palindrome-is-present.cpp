#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

void Modify(string *s) {
    reverse(s->begin(), s->end());
}

int main() {
    string str ;
    cin >> str;
    string temp = str;
    Modify(&str);
    if(temp == str){
         cout << "Yes" << endl;
    }else{
         cout << "No" << endl;
    }

    return 0;
}