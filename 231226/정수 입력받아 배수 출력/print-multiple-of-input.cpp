#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int tempa = a;
	for (int i = 0; i < 5; i ++) {
		cout << a << " ";
        a = tempa + a;
	}

	return 0;

}