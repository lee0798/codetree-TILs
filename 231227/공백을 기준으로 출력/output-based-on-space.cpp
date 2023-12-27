#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;
    string a;

	getline(cin, str);
    getline(cin, a);
    cin >> a;
	for(int i =0 ; i < str.length() ;i ++){
        if(' ' != str[i])
            cout << str[i];
    }
    for(int i =0 ; i < a.length() ;i ++){
        if(' ' != a[i])
            cout << a[i];
    }

	return 0;

}