#include <iostream>
using namespace std; 


void Modify(int *x, int c) {
    for(int i = 0; i < c ;i ++){
        if(x[i]%2 == 0){
            x[i] = x[i]/2;
        }
    }


}

int main() {
    int c;
    cin >> c;
    int arr[50] = {};
    for(int i = 0; i < c; i ++){
        cin >> arr[i];
    }
    Modify(arr,c);
    for(int i = 0; i < c ; i ++){
        cout << arr[i]<< " ";
    }
    return 0;
}