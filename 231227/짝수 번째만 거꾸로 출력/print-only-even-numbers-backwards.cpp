#include <iostream>
#include <string>
using namespace std;

int main() {

	string arr;
	cin >> arr;
	int len = arr.length();
	if(len % 2 ==1)
		len = len-1;

	for (int i = len-1; i >=0; i-=2) {
		cout << arr[i] ;
	}

	return 0;

}