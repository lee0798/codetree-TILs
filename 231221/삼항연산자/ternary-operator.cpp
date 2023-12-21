#include <iostream>
using namespace std;

int main() {

	int a, b;
	cin >> a;

	b = a == 100 ? 0 : 1;

	if(b == 0){
        cout << "pass";
    }else {
        cout << "failure";
    }
	return 0;

}