#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {

	string a = "";
    cin >> a;
	for(int i = 0; i < a.length(); i ++){
        if(a[i] >= 'a' && a[i] <= 'z' ){
            cout << (char)toupper(a[i]);
        }else{
            cout << (char)tolower(a[i]);
        }
    }

	return 0;

}