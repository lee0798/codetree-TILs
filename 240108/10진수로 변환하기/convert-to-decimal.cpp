#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    string input_string;
    cin >> input_string;
    
    vector<int> arr(input_string.begin(), input_string.end());
    vector<int> bits;

    for (char bit : arr) {
        bits.push_back(bit - '0');
    }

    int num = 0;
    for (int i = 0; i < bits.size(); i++) {
        num += bits[i] * pow(2, bits.size() - i - 1);
    }

    cout << num;

    return 0;
}