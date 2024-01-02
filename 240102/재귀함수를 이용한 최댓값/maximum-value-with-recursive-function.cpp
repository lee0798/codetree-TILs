#include <iostream>
using namespace std;
int arr[100];
int fun(int n){
    if(n == 0){
        return arr[0];
    }
    return max(arr[n],fun(n-1));
}



int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    cout << fun(n);
    return 0;
}