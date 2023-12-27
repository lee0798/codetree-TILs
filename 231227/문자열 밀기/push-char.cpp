#include <iostream>
#include <string>
using namespace std;

int main() {

	string s = "";
    cin >> s ; 
	int len = s.length();
	s = s.substr(1, len-1) + s.substr(0, 1);
	cout << s;

	return 0;

}