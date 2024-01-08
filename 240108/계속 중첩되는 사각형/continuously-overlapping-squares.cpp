#include <iostream>
using namespace std;
#define OFFSET 100;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int arr[200][200] ={};
    for(int i = 0; i < n ; i ++){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += OFFSET;
        y1 += OFFSET;
        x2 += OFFSET;
        y2 += OFFSET;
        for(int j = x1 ; j < x2; j ++){
            for(int k = y1; k < y2; k ++){
                if(i % 2 == 0)
                arr[j][k] = 1;
                else
                arr[j][k] = -1;
            }
        }
    }
    int cnt =0;
    for(int i = 0; i < 200; i ++){
        for(int j = 0; j < 200 ; j ++){
            if(arr[i][j]  == -1)
            cnt ++;
        }
    }
    cout << cnt;


    return 0;
}