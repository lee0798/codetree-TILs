#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
	string *arr = new string [n];
    string sum = "";
	for(int i = 0; i < n ; i++){
        cin >> arr[i];
        sum += arr[i];
    }
	for(int i = 0; i < sum.length(); i ++){
        if((i + 1) % 5 == 0){
            cout << sum[i] << endl;
        }else{
            cout << sum[i];
        }
    }

	return 0;

}