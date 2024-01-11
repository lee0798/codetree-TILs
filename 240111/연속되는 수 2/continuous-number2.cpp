#include <iostream>
#define N 1000
using namespace std;
int main() {
    int arr[N] = {};
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    int cnt = 0;
    int maxc = 0;
    for(int i = 0;i < n; i++){
        if(i ==0 ||arr[i] == arr[i -1])
            cnt ++;
        if(i != 0  && arr[i] != arr[i-1])
            if(cnt > maxc){
                maxc = cnt;
                cnt = 1;
            }
    }
    cout << maxc;
    // 여기에 코드를 작성해주세요.
    return 0;
}