#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    int sum = 0;
	string *arr = new string[n];
    char a ;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
    cin >> a;


	for (int i = 0; i < n; i++) {
        if(a == arr[i][0]){
            cnt ++;
            sum+= arr[i].length();
        }
	}
    cout << fixed;
    cout.precision(2);
    cout << cnt << " " <<(double)sum/cnt;
   
	return 0;

}