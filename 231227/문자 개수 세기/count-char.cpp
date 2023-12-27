#include <iostream>
#include <string>
using namespace std;

int main() {

	string str;
    string a;
    int b = 0;
	getline(cin, str);
    cin >> a;
	for(int i =0 ; i < str.length() ;i ++){
        if(a[0] == str[i])
            b ++;
    }
    cout << b;
	return 0;

}