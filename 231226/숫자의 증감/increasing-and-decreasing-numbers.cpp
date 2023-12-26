#include <iostream>
using namespace std;

int main() {


	int b;
	char n;
	cin >> n >> b;

	if (n == 'A') {
		for (int i = 1; i <= b; i++) {
			cout << i << " ";
		}
	}else{
        for (int i = b; i >= 1; i--) {
			cout << i << " ";
		}

    }

	return 0;

}