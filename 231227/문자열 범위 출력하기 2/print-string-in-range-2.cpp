#include <iostream>
#include <string>
using namespace std;

int main() {

	string arr;
	cin >> arr;
    int a;
    cin >> a;
	int len = arr.length();
    if(a >= len){
       for(int i = len-1; i >= 0 ; i --){
        cout << arr[i];
       }
    }else{
        for (int i = len-1; i >= len-a; i--) {
		cout << arr[i];
	}
    }

	

	return 0;

}