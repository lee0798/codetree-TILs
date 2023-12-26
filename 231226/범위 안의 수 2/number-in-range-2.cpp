#include <iostream>
using namespace std;

int main() {

    int sum = 0;
    double cnt = 0;
	for (int i = 0; i < 10; i++) {
        int a ;
        cin >> a;
		if(a <=200  && a >= 0){
            sum += a;
            cnt  +=1;
        }
	}
	cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << sum / cnt;
	return 0;

}