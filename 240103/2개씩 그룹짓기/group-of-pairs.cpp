#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr[1000];
    int n;
    int sum1 = 0;
    int sum2 = 0;
    cin >> n ;
    for(int i = 0; i < 2*n ; i ++){
        cin >> arr[i];
    }
    sort(arr, arr + 2*n);
    for(int i = 0; i < 2*n ; i ++){
        if(i %2 ==0)
        sum1+=arr[i];
        else
        sum2+=arr[i];
    }
    
    cout<< max(sum1,sum2);
    

    return 0;
}