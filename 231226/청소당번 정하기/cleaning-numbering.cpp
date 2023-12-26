#include <iostream>
using namespace std;

int main() {

	int cnt = 0;
    int cnt2 = 0;
	int cnt3 = 0;
	int a ;
    cin >> a;
	for (int i = 1; i <=a ; i++) {
		if (i % 12 == 0) {
			cnt++;
		}
        else if(i % 3 == 0){
            cnt2 ++;
        }
		else if(i % 2 == 0){
			cnt3 ++ ;
		}
	}

	cout << cnt3 << " " << cnt2 << " " << cnt;
	return 0;

}