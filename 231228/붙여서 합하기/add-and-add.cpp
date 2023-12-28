#include <iostream>
#include <string>
using namespace std;

int main() {

	string a ="";
    string b = "";
	cin >> a >> b;
    int a1 = stoi(a + b);
    int b1 = stoi(b + a);

	cout << a1 + b1;

	return 0;

}