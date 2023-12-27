#include <iostream>
#include <string>
using namespace std;

int main() {

	string s = "";
    cin >> s;
    string c = "";
    cin >> c;
    int cnt = 0;
	int length = s.length();
    bool ex  = false;

	for (int i = 0; i <= length - 1; i++) {
		int tempi = i;
        for(int j = 0; j < c.length(); j ++){

            if(s[tempi + j] == c[j]){
                if(j == c.length() -1){
                    ex = true;
                    break;
                }else{
                    continue;
                }
            }else{
                break;
            }
        }
        if(ex){
            cnt ++;
            ex =false;
        }

	}
    cout << cnt;


	return 0;

}