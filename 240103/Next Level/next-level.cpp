#include <iostream>
#include <string>

using namespace std;

class Spy {
    public:
        string code;
        int time;
        Spy(string code = "codetree", int time = 10) {
            this->code = code;
            this->time = time;
        }
};

int main(){
    // 변수 선언 및 입력
    string scode;
    int time;
    cin >> scode >> time;
    
    // Spy 객체를 만들어 줍니다.
    Spy s = Spy();
    cout << "user " << s.code <<" lv " << s.time<<endl;
    s.code  = scode;
    s.time = time;
     cout << "user " << s.code <<" lv " << s.time<<endl;
    return 0;
}