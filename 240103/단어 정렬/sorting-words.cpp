#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    string words[100] = {};
    int n;
    cin >> n;
    for(int i = 0; i < n;i ++){
        cin >> words[i];
    }
    sort(words, words + n);
    for(int i = 0; i < n; i++)
        cout << words[i] << endl;       // "cat", "banana", "apple", "app"
    return 0;
}