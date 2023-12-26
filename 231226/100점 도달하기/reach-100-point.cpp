#include <iostream>
using namespace std;

int main() {

	int a ;
    cin >> a;

	for (int i = a; i <= 100; i++) {
        int temp = i /10;
		if (temp >= 9) {
			cout <<"A ";
		}
		else if(temp ==8){
			cout << "B ";
		}
        else if(temp ==7){
			cout << "C ";
		}
        else if(temp ==6){
			cout << "D ";
		}else{
            cout << "F ";
        }
	}

	return 0;

}