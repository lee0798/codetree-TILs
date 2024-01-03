#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2000];
    int n;
    int sum1 = 0;
    int sum2 = 0;
    cin >> n ;
    for(int i = 0; i < 2*n ; i ++){
        cin >> arr[i];
    }
    sort(arr, arr + 2*n);
    for(int i = 0; i < n ; i ++){
        sum1 = arr[i] + arr[2 * n -1 -i];
        sum2 = max(sum2,sum1);
    }
    
    cout<< sum2;
    

    return 0;
}