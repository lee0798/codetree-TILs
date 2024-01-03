#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string words[100] = {};
    bool sm[100] = {};


    int n, k;
    string str;
    cin >> n >> k >> str;

    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    for (int i = 0; i < n; i++) {
        sm[i] = true;
    }


    sort(words, words + n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < str.length(); j++) {
            if (words[i][j] != str[j])
                sm[i] = false;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (sm[i]){
            cnt++;
            if (cnt == k)
            cout << words[i] << endl;

        }
    }

    return 0;
}