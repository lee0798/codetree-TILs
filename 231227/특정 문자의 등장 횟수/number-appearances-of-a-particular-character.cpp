#include <iostream>
#include <string>
using namespace std;

int main() {

	string s = "";
    cin >> s;
	int length = s.length();
	int exists = 0;
    int exists1 = 0;

	for (int i = 0; i < length - 1; i++) {
		if (s[i] == 'e' && s[i + 1] == 'e') {
			exists ++;
		}
	}
    for (int i = 0; i < length - 1; i++) {
		if (s[i] == 'e' && s[i + 1] == 'b') {
			exists1 ++;
		}
	}
    cout << exists << " " << exists1;
    return 0;
}