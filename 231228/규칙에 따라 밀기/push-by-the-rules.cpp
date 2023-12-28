#include <iostream>
#include <string>
#include<algorithm>  
using namespace std;

int main() {

	string s = "";
    cin >> s ;
    string n = "";
    cin >> n; 
	int len = s.length();
    for(int i = 0; i < n.length() ; i ++){

        if(n[i] == 'L'){
            s = s.substr(1,len-1) + s.substr(0, 1);
        }else{
            s = s.substr(len-1, 1) + s.substr(0,len-1);
        }
    }
    cout << s << endl;
	
	return 0;

}