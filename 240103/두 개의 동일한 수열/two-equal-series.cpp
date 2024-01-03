#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    bool sm = true;
    int arr[100] , arr1[100];
    int n;
    cin >> n;
    for(int i = 0; i < n ; i ++){
        cin >> arr[i];
    }
    for(int i = 0; i < n ; i ++){
        cin >> arr1[i];
    }
    sort(arr, arr + n);
    sort(arr1, arr1 + n);
    for(int i = 0;i < n ; i++ ){
        if(arr[i] != arr1[i])
            sm =false;
    }
    if(sm)
    cout << "Yes";
    else
    cout <<"No";

    

    return 0;
}