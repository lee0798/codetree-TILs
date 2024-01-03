#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[100];
    int n;
    cin >> n;
    for(int i = 0; i < n ; i ++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    cout << endl;
    sort(arr,arr + n, greater<int>());
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    

    return 0;
}