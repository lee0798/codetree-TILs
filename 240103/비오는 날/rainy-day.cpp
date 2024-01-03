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
    Spy s[100];
    bool sm[100];
    int n;
    cin >> n;
    for(int i = 0; i < n;i ++){
        cin >> sname >> snum >> sloc;
        s[i] = Spy(sname,snum,sloc);
    }

    for(int i = 0 ; i < n ;i ++){
        if( s[i].loc== "Rain"){
            sm[i] = true;
        }else{
            sm[i] = false;
        }
    }
    string min_name = "9999-99-99";
    int min_num = 0;
    for(int i = 0 ; i < n ;i ++){
        if(sm[i] == true && s[i].name<min_name){
            min_name = s[i].name;
            min_num = i;
        }
    }
    cout << s[min_num].name << " " << s[min_num].num << " " << s[min_num].loc;


    return 0;
}