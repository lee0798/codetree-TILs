#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int h, w;

	// 입력
	cin >> h >> w;
    

	int bmi = w * 100 * 100 / (h * h);
	
    // 출력
    cout << bmi << endl;
	if(bmi >= 25)
		cout << "Obesity";
    return 0;
}