#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, str1;
    cin >> str >> str1;
    if(str.length() == str1.length()){
        cout << "same" ;
    }else if(str.length() < str1.length()){
        cout << str1 << " " << str1.length();
    }else{
        cout << str << " " << str.length();
    }

    return 0;

}