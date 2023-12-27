#include <iostream>
#include <string>
#include<algorithm>  
using namespace std;

int main() {

	string s = "";
    cin >> s ;
    int n;
    cin >> n; 
	int len = s.length();
    for(int i = 0; i < n ; i ++){
        int a;
        cin >> a;
        if(a == 1){
            s = s.substr(1,len-1) + s.substr(0, 1);
	        cout << s<< endl;
        }else if(a == 2){
            s = s.substr(len-1, 1) + s.substr(0,len-1);
            cout << s << endl;
        }else{
            reverse(s.begin(), s.end());
            cout << s << endl;
        }
    }
	
	return 0;

}