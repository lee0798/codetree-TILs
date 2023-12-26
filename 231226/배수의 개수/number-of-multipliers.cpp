#include <iostream>
using namespace std;

int main() {

	int cnt = 0;
    int cnt2 = 0;
	for (int i = 1; i <= 10; i++) {
        int a ;
        cin >> a;
		if (a % 3 == 0) {
			cnt++;
		}
        if(a % 5 == 0){
            cnt2 ++;

        }
	}

	cout << cnt << " " << cnt2;
	return 0;

}