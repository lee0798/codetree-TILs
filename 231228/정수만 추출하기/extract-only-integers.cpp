#include <iostream>
#include <string>
using namespace std;

int main() {

	string a ="";
    string b = "";
    string temp = "";
    int c = 0,d = 0;
	cin >> a >> b;
    for(int i = 0 ; i < a.length(); i ++){
        if(isdigit(a[i])){
            temp +=a[i];
        }else{
            c = stoi(temp);
            temp = "";
            break;
        }
    }
    for(int i = 0 ; i < b.length(); i ++){
        if(isdigit(b[i])){
            temp +=b[i];
        }else{
            d = stoi(temp);
            break;
        }
    }
	cout << c + d;

	return 0;

}