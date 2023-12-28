#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "";
    string b = "";
    string temp = "";
    string temp2 = "";
    int c = 0;
    int d = 0;

    cin >> a >> b;

    // Handle non-digit characters at the beginning of 'a'
    int i = 0;
    while (i < a.length() && !isdigit(a[i])) {
        temp += a[i];
        i++;

    temp = "";
    while (i < a.length() && isdigit(a[i])) {
        temp += a[i];
        i++;
    }

    c = stoi(temp);
    temp2 = "";
    for (int i = 0; i < b.length(); i++) {
        if (isdigit(b[i])) {
            temp2 += b[i];
        } else {
            break;
        }
    }

    if (!temp2.empty()) {
        d = stoi(temp2);
    }

    cout << c + d;

    return 0;
}