#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	string a;
    while(1){
        cin >> a;
        if(a == "END")
         break;
        reverse(a.begin(),a.end());
        cout << a << endl;

    }

	return 0;

}