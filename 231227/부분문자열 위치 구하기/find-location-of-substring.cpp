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
    bool ex  = false;

	for (int i = 0; i <= length - 1; i++) {
		int tempi = i;
        for(int j = 0; j < c.length(); j ++){

            if(s[tempi + j] == c[j]){
                if(j == c.length() -1){
                    ex = true;
                    start_idx = tempi;
                    break;
                }else{
                    continue;
                }
            }else{
                break;
            }
        }

	}

    
        cout << start_idx;


	return 0;

}