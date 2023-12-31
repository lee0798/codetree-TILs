#include <iostream>
using namespace std;
bool fun(int n){
    if(n<2)return false;
    bool is_prime = true;
    for(int i = 2; i < n ; i ++){
        if(n % i == 0)
            is_prime = false;
    }
    return is_prime;
}


int main() {
    int a,b;
    int sum = 0;
    cin >> a >> b;
    for(int i = a ; i <=b; i ++){
        if(fun(i))
            sum += i;
    }
    cout << sum;

    

    return 0;
}