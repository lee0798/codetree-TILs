#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {

	string a = "";
    cin >> a;
    int sum = 0;
	for(int i = 0; i < a.length(); i ++){
        if(isdigit(a[i])){
            sum+=stoi(string(1, a[i]));
        }
    }
    cout << sum;
	return 0;

}