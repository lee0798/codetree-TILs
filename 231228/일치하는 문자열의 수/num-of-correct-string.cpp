#include <iostream>
#include <string>
using namespace std;

int main() {

	int a ;
    cin >> a ;
	string str;
    cin >> str;
    int cnt = 0;
    for(int i = 0; i < a; i ++){
        string a;
        cin >> a;
        if(a == str)
            cnt ++;
    }
	cout << cnt;

	return 0;

}