#include <iostream>
using namespace std;
#define m 50

int arr[m];
void fun(int *arr, int c){
    for(int i = 0; i< c ; i ++){
        arr[i] = abs(arr[i]);
    }
}


int main() {
    int c = 0;
    cin >> c;
    for(int i = 0; i < c ; i++){
        cin >> arr[i];
    }
    fun(arr, c);
    for(int i = 0; i < c ; i++){
        cout << arr[i] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}