#include <iostream>
#include <string>
using namespace std;

int main() {

	string s = "";
    cin >> s;
    string c = "";
    cin >> c;
	int length = s.length();
	int start_idx = -1;

	for (int i = 0; i <= length - 1; i++) {
		if (s[i] == c[0] ) {
			start_idx = i;
			break;
		}
	}

    if(start_idx == -1){
        cout << "No";
    }else{
        cout << start_idx;
    }


	return 0;

}