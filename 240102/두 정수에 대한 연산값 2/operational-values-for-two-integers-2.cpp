#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    if(*a > *b){
        *a *=2;
        *b +=10;
    }else{
        *a +=10;
        *b *=2;
    }

}

int main() {
    int n , m ;
    cin >> n >> m;
    swap(&n, &m);
    cout << n << " " << m;
    return 0;
}