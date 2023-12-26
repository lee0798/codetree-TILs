#include <iostream>

using namespace std;

// 변수 선언:
int n, m;
int answer[100][100] = {0};
int count = 1;

int main() {
    // 입력:
    cin >> n >> m;

    // Step 1:
    for(int start_col = 0; start_col < m; start_col++) {
        int curr_row = 0;
		int curr_col = start_col;

		while(curr_col >= 0 && curr_row < n) {
			answer[curr_row][curr_col] = count;

			// 변수 업데이트 :
			curr_row++;
			curr_col--;
			count++;
		}
    }

    // Step 2:
    for(int start_row = 1; start_row < n; start_row++) {
        int curr_row = start_row;
		int curr_col = m - 1;

        while(curr_col >= 0 && curr_row < n) {
			answer[curr_row][curr_col] = count;

			// 변수 업데이트 :
			curr_row++;
			curr_col--;
			count++;
		}
    }

    // 출력:
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < m; col++)
            cout << answer[row][col] << " ";
        cout << endl;
    }

    return 0;
}