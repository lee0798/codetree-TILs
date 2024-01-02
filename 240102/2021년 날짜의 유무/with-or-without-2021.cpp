#include <iostream>

using namespace std;

int fun(int m) {
    if(m == 2)
        return 28;
    if(m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    
    return 31;
}

bool fun2(int m, int d) {
    if(m <= 12 && d <= fun(m))
        return true;
    
    return false;
}

int main() {

    int m, d;
    cin >> m >> d;
    
    if(fun2(m, d))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}