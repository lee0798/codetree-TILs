#include <iostream>
using namespace std;
#define OFFSET 1000;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    n =2;
    int arr[2000][2000] ={};
    for(int i = 0; i < n ; i ++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += OFFSET;
        x2 += OFFSET;
        y1 += OFFSET;
        y2 += OFFSET;
        for(int j = x1 ; j < x2; j ++){
            for(int k = y1; k < y2; k ++){
                arr[j][k] += 1;
            }
        }
    }
    int cnt2 =0;
    for(int i = 0; i < 2000; i ++){
        for(int j = 0; j < 2000 ; j ++){
            if(arr[i][j]  > 0)
            cnt2 ++;
        }
    }


    int cnt = 0;
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET;
    x2 += OFFSET;
    y1 += OFFSET;
    y2 += OFFSET;
    for(int j = x1 ; j < x2; j ++){
        for(int k = y1; k < y2; k ++){
            if(arr[j][k] > 0)
                cnt ++;
        }
    }
    cout << cnt2 - cnt;

    

    return 0;
}