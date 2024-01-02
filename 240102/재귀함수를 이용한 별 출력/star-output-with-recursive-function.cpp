#include <iostream>
using namespace std;
void PrintStar(int n) {  // 1부터 n번째 줄까지 별을 출력하는 함수
    if(n == 0)           // n이 0이라면, 더 이상 진행하지 않고
        return;          // 퇴각합니다.

    PrintStar(n - 1);    // 1부터 n - 1번째 줄까지 출력하는 함수
    for(int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    PrintStar(n);
    return 0;
}