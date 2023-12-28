#include <iostream>
#include <string>
using namespace std;

int main() {

	int a ;
    cin >> a ;
	string a_str;
    int cnt = 0;
	a_str = to_string(a);
    for(int i = 0; i < a_str.length(); i ++){
         cnt +=stoi(string(1,a_str[i]));
    }
	cout << cnt;

	return 0;

}