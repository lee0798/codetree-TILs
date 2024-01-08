#include <iostream>
using namespace std;
#define OFFSET 100;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[200][200] ={};
    for(int i = 0; i < n ; i ++){
        int x1,y1;
        cin >> x1 >> y1;
        x1 += OFFSET;
        y1 += OFFSET;
        for(int j = x1 ; j < x1 +  8; j ++){
            for(int k = y1; k < y1 + 8; k ++){
                arr[j][k] += 1;
            }
        }
    }
    int cnt =0;
    for(int i = 0; i < 200; i ++){
        for(int j = 0; j < 200 ; j ++){
            if(arr[i][j]  > 0)
            cnt ++;
        }
    }
    cout << cnt;


    return 0;
}