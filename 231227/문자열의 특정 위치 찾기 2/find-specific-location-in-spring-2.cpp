#include <iostream>
#include <string>
using namespace std;

int main() {

	string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char a;

    int b = 0;
    cin >> a;
	for(int i =0 ; i < 5 ;i ++){
        if(a == str[i][2] || a == str[i][3]){
            cout << str[i] << endl;
            b ++;
        }
            
    }
    cout << b;

	return 0;

}