#include <iostream>
#include <string>
using namespace std;

int main() {

	string s = "";
    cin >> s;
	int length = s.length();
	bool exists = false;
    bool exists1 = false;

	for (int i = 0; i < length - 1; i++) {
		if (s[i] == 'a' && s[i + 1] == 'b') {
			exists = true;
		}
	}
    for (int i = 0; i < length - 1; i++) {
		if (s[i] == 'e' && s[i + 1] == 'e') {
			exists1 = true;
		}
	}

    if (exists1 == true) cout << "Yes ";
	else cout << "No ";
	if (exists == true) cout << "Yes ";
	else cout << "No ";
    

	return 0;

}