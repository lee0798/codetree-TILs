#include <iostream>
using namespace std;
#include <cctype>

int main() {

    char arr_2d[5][3];  

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr_2d[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << (char)toupper(arr_2d[i][j]) << " ";  
        }
        cout << endl;
    }

    return 0;
}