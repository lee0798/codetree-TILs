#include <iostream>
#include <string>
using namespace std;

int main() {

	int a ;
    cin >> a ;
	string str;
    int cnt = 0;
    for(int i = 0; i < a; i ++){
        int a;
        cin >> a;
        cnt += a;
    }
    str = to_string(cnt);
    str = str.substr(1, str.length() -1) + str.substr(0, 1);
	cout << str;

	return 0;

}