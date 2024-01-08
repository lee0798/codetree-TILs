#include <iostream>
using namespace std;
#define OFFSET 1000;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    n =2;
    int arr[2000][2000] ={};
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

    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET;
    x2 += OFFSET;
    y1 += OFFSET;
    y2 += OFFSET;
    for(int j = x1 ; j < x2; j ++){
        for(int k = y1; k < y2; k ++){
            if(arr[j][k] == 1){
                arr[j][k] = 0;
            }
        }
    }

   


    int temp_max_x,temp_min_x, temp_max_y,temp_min_y;
    temp_max_x = -2000;temp_min_x = 2000;temp_max_y = -2000;temp_min_y = 2000;
    for(int j = 0 ; j < 2000; j ++){
        for(int k = 0; k < 2000; k ++){
            if(arr[j][k] > 0){
                if(j < temp_min_x)
                temp_min_x = j;
                if(j > temp_max_x)
                temp_max_x = j;
                if(k < temp_min_y)
                temp_min_y = k;
                if(k > temp_max_y)
                temp_max_y = k;
            }
        }
    }


    cout << (temp_max_x - temp_min_x + 1) * (temp_max_y - temp_min_y + 1);

    

    return 0;
}