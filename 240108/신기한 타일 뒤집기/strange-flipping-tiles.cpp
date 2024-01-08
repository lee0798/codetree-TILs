#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    char arr[10000] = {'g'};
    int num = 5000;
    int cntw = 0, cntb = 0;

    for (int i = 0; i < n; i++) {
        int a;
        char b;
        cin >> a >> b;

        if (b == 'R') {
            for (int j = 0; j < a; j++) {
                arr[num] = 'b';
                num++;
            }
            num--;
        } else if (b == 'L') {
            for (int j = 0; j < a; j++) {
                arr[num] = 'w';
                num--;
            }
            num++;
        }
    }

    for (char elem : arr) {
        if (elem == 'w') {
            cntw++;
        } else if (elem == 'b') {
            cntb++;
        }
    }

    cout << cntw << " " << cntb << endl;

    return 0;
}