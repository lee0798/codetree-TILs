#include <iostream>
#include <string>
using namespace std;

int main() {

	string a = "", b = "";
    cin >> a >> b;
	string tempa = a + b;
	string tempb = b + a;

	if(tempa == tempb){
		cout << "true";
	}else{
		cout <<"false";
	}
	

	return 0;

}