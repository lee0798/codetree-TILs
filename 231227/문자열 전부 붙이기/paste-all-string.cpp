#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
	string *arr = new string [n];
    string sum = "";
	for(int i = 0; i < n ; i++){
        cin >> arr[i];
        sum += arr[i];
    }
	cout << sum;

	return 0;

}