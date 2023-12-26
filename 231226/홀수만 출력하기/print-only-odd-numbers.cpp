#include <iostream>
using namespace std;

int main() {

	int a ;
    cin >> a;

	for (int i = 1; i <= a; i++) {
		int b;
		cin >> b;
		if(b %3 == 0){
			cout << b <<endl;
		}
	}

	return 0;

}