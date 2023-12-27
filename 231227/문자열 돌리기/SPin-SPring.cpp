#include <iostream>
#include <string>
using namespace std;

int main() {

	string s = "";
    cin >> s ; 
    cout << s << endl;
	int len = s.length();
    for(int i = 0; i < len ; i ++){
        s = s.substr(len-1,1) + s.substr(0, len-1);
	    cout << s<< endl;;
    }
	
	return 0;

}