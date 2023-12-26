#include <iostream>
using namespace std;

int main() {

	int a,b;
    cin >> a >> b;
    cout << a/b<<".";
    a %= b;

	for (int i = 1; i <= 20; i++) {
		a *= 10;
        cout << a/b;
        a %=b;
	}

	return 0;

}