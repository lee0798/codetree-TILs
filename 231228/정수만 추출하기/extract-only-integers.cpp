#include <iostream>
#include <string>
using namespace std;

int main() {
    string a = "";
    string b = "";
    string temp = "";
    string temp2 = "";
    int c = 0, d = 0;

    cin >> a >> b;

    for (int i = 0; i < a.length(); i++) {
        if (isdigit(a[i])) {
            temp += a[i];
        } else if (!temp.empty()) {
            c = stoi(temp);
            temp = "";
            break;
        }
    }

    for (int i = 0; i < b.length(); i++) {
        if (isdigit(b[i])) {
            temp2 += b[i];
        } else{
            d = stoi(temp2);
            break;  
        }
    }

    cout << c + d;

    return 0;
}