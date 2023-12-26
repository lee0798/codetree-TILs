#include <iostream>
using namespace std;

int main() {

	int a,b;
	cin >> a >> b;
    if (a > b){
        int temp =b;
        b =a;
        a =temp;
    }
    int sum = 0;
	for (int i = a; i <= b; i++) {
		if(i % 5 == 0){
            sum += i;
        }
	}
	cout << sum ;
	return 0;

}