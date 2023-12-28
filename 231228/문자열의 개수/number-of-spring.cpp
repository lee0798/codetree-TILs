#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	string a;
    string arr[200];
    int cnt = 0;
    while(1){
        cin >> a;
        if(a == "0")
        {
            cout<< cnt << endl;
            break;
        }
        cnt ++;
        arr[cnt] = a;
    }
    for(int i = 1; i <= cnt; i ++){
        if(i % 2 == 1){
            cout << arr[i] << endl;
        }
    }

	return 0;

}