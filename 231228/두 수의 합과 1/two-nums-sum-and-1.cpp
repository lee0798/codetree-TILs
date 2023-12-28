#include <iostream>
#include <string>
using namespace std;

int main() {

	int a ,b;
    cin >> a >> b;
	string a_str;
    int cnt = 0;
	a_str = to_string(a + b);
    for(int i = 0; i < a_str.length(); i ++){
        if(a_str[i] == '1')
         cnt ++;
    }
	cout << cnt;

	return 0;

}