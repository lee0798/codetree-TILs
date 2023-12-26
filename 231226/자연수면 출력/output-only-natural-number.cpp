#include <iostream>
using namespace std;

int main() {


	int a, b;
	cin >> a >> b;

	if (a <= 0) {
        cout<< 0;
	}else{
        for (int i = 1; i <= b; i++) {
			cout << a;
		}

    }

	return 0;

}