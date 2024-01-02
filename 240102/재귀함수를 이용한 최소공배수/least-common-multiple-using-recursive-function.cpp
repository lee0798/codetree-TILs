#include <iostream>
using namespace std;
int arr[100];
int gcd(int n, int m){
    if(m == 0){
        return n;
    }else{
        return gcd(m,n%m);
    }
}
int gmd(int a, int b){
    int re = gcd(a,b);
    return (a/re) *(b/re) * re;

}

int fun(int n){
    if(n == 0){
        return arr[0];
    }
    return gmd(arr[n-1],fun(n-1));
}



int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> arr[i];
    }
    cout << fun(n);
    return 0;
}