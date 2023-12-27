#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

	string *arr = new string[n];
    int sum = 0;
    int cnt = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
        sum += arr[i].length();
        if('a' == arr[i][0]){
            cnt ++;

        }
	}
    cout << sum << " " << cnt;

	return 0;

}