#include <iostream>
#include <cstring>
# include <algorithm>
using namespace std;
int main() {
    string arr[3] = {};
    cin >> arr[0] >> arr[1] >> arr[2];
    int arr1[3] = {};
    for(int i= 0; i < 3 ; i ++){
        arr1[i] = arr[i].length();
    }
    int *min = min_element(begin(arr1),end(arr1));
    int *max = max_element(begin(arr1),end(arr1));
    cout << *max - *min;

    // 여기에 코드를 작성해주세요.
    return 0;
}