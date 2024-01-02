#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    if(*a > *b){
        *a +=25;
        *b *=2;
    }else{
        *b +=25;
        *a *=2;
    }

}

int main() {
    int n , m ;
    cin >> n >> m;
    swap(&n, &m);
    cout << n << " " << m;
    return 0;
}