#include <iostream>
#include <string>
using namespace std;

int main() {

	string s = "";
    cin >> s;
    s[s.length() - 2] = 'a';
	s[1] = 'a';
	cout << s;

	return 0;

}