#include <iostream>
#include <string>
using namespace std;

int main() {

	string arr;
	cin >> arr;
	int len = arr.length();
	int clen = 1;
	string arr1;
	for (int i = 1; i < len; i++) {
		if(arr[i] == arr[i-1]){
			clen ++;
		}else{
			arr1 += arr[i-1] + to_string(clen);
			clen = 1;
		}
	}
	arr1 += arr[len - 1] + to_string(clen);

	cout << arr1.length()<< endl;
	cout << arr1;

	return 0;
}