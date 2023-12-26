#include <iostream>
using namespace std;

int main() {

	int a ;
    cin >> a;

	for (int i = 1; i <= a; i++) {
		int ten;
		if(i >=10){
			 ten = i / 10;
		}
		int one = i % 10;
		if (one == 3 || one == 6 || one == 9 ||ten == 3 ||ten == 6 ||ten == 9) {
			cout <<"0 ";
		}
		else{
            cout << i<< " ";
        }
	}

	return 0;

}