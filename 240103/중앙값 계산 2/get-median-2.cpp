#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[1000];
    int n;
    cin >> n;
    for(int i = 0; i < n ; i ++){
        cin >> arr[i];
    }

    for(int i = 1; i <= n; i ++){
        if(i %2 ==1){
            sort(arr, arr + i);
            cout << arr[i/2] << " ";
        }
    }

    

    return 0;
}