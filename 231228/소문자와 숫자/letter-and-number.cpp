#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {

	string a = "";
    cin >> a;
	for(int i = 0; i < a.length(); i ++){
        if(isalpha(a[i]) || isdigit(a[i])){

            cout << (char)tolower(a[i]);
        }
    }

	return 0;

}