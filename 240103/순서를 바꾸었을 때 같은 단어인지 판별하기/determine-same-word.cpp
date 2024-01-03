#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string arr, arr1;
    cin >> arr >> arr1;

    sort(arr.begin(), arr.end());
    sort(arr1.begin(), arr1.end());
    
    if (arr == arr1)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}