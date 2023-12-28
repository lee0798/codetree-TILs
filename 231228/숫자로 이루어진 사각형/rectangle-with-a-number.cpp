#include <iostream>
using namespace std;
void PrintRect(int n) {
    int cnt = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            if(cnt == 10)
                cnt = 1;
            cout << cnt ++ << " ";
        }
        cout << endl;
    }
}

int main() {
    int row_num;
    cin >> row_num ;

    PrintRect(row_num);
    return 0;
}