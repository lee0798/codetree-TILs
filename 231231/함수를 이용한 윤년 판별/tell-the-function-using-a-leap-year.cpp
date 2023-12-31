#include <iostream>
using namespace std;
bool fun(int n){
    if(n % 4 != 0)
    return false;
    if(n % 100 != 0)
    return true;
    if(n % 400 == 0)
    return true;
    return false;
}


int main() {
    int a;
    cin >> a;
    if(fun(a))
        cout<< "true";
    else
        cout << "false";
 
    

    

    return 0;
}