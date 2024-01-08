#include <iostream>
#include <vector>

#define MAX_N 100
#define MAX_R 2000
#define OFFSET 1000

using namespace std;

int main() {
    int n;
    cin >> n;

    int cur = 0;
    vector<int> checked(MAX_R + 1, 0);

    for (int i = 0; i < n; i++) {
        int distance;
        char direction;
        cin >> distance >> direction;

        if (direction == 'L') {
            for (int j = cur - distance + OFFSET; j < cur + OFFSET; j++) {
                checked[j]++;
            }
            cur -= distance;
        } else {
            for (int j = cur + OFFSET; j < cur + distance + OFFSET; j++) {
                checked[j]++;
            }
            cur += distance;
        }
    }

    int cnt = 0;
    for (int i = 0; i <= MAX_R; i++) {
        if (checked[i] >= 2) {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}