#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    n =10;
    int cnt = 0;
	string *arr = new string[n];
    char a ;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
    cin >> a;


	for (int i = 0; i < n; i++) {
        if(a == arr[i][arr[i].length()-1])
            cout << arr[i] << endl;
            cnt ++;
	}
    if(!cnt)
        cout <<"None";


	return 0;

}