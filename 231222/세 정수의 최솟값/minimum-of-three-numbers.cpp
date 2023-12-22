#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int d = min(a, b);
    if(c <= d){
        cout << c;
    }else{
        cout << d;
    }

    return 0;
}