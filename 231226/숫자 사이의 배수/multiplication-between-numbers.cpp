#include <iostream>
using namespace std;

int main() {

	int a,b;
	cin >> a >> b;
    int sum = 0;
    double cnt = 0;
	for (int i = a; i <= b; i++) {
		if(i % 5 == 0 || i % 7 == 0){
            sum += i;
            cnt  +=1;
        }
	}
	cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << sum / cnt;
	return 0;

}