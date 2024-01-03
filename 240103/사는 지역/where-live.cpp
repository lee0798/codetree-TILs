#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Spy {
    public:
        string name;
        string num;
        string loc;
        Spy(string name, string num, string loc) {
            this->name = name;
            this->num = num;
            this->loc = loc;
        }
        Spy(){}
};

int main(){
    // 변수 선언 및 입력
    string sname;
    string snum;
    string sloc;
    Spy s[10];
    string arrname[10];
    int n;
    cin >> n;
    for(int i = 0; i < n;i ++){
        cin >> sname >> snum >> sloc;
        s[i] = Spy(sname,snum,sloc);
        arrname[i] = sname;
    }
    sort(arrname, arrname + n);
    for(int i = 0 ; i < n ;i ++){
        if(s[i].name == arrname[n-1]){
            cout << "name " << s[i].name << endl;
            cout << "addr " << s[i].num << endl;
            cout << "city " << s[i].loc << endl;

        }
    }
    return 0;
}