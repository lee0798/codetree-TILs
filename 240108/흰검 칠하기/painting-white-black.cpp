#include <iostream>
#include <vector>

using namespace std;

const int MAX_K = 100000;

int main() {
    int n;
    cin >> n;

    vector<int> a(2 * MAX_K + 1, 0);
    vector<int> cnt_b(2 * MAX_K + 1, 0);
    vector<int> cnt_w(2 * MAX_K + 1, 0);
    int b = 0, w = 0, g = 0;

    int cur = MAX_K;
    for (int i = 0; i < n; i++) {
        int x;
        char c;
        cin >> x >> c;

        if (c == 'L') {
            while (x > 0) {
                a[cur] = 1;
                cnt_w[cur]++;
                x--;

                if (x) {
                    cur--;
                }
            }
        } else {
            while (x > 0) {
                a[cur] = 2;
                cnt_b[cur]++;
                x--;

                if (x) {
                    cur++;
                }
            }
        }
    }

    for (int i = 0; i < 2 * MAX_K + 1; i++) {
        if (cnt_b[i] >= 2 && cnt_w[i] >= 2) {
            g++;
        }
        else if (a[i] == 1) {
            w++;
        } else if (a[i] == 2) {
            b++;
        }
    }

    // 정답을 출력합니다.
    cout << w << " " << b << " " << g << endl;

    return 0;
}