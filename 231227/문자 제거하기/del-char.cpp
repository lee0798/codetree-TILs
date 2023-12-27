#include <iostream>
#include <string>
using namespace std;

int main() {

	string s = "";
    cin >> s;
	while(1){
        int a;
        cin >> a;
        if(s.length() == 1){
            break;
        }
        if(a >= s.length()){
            s.erase(s.length()-1,1);
            cout << s<< endl;
        }else{s.erase(a,1);
        cout << s << endl;
        }
        
    }


	return 0;

}