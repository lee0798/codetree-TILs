#include <iostream>
#include <string>

using namespace std;

class Spy {
    public:
        string code;
        char point;
        int time;
        Spy(string code, char point, int time) {
            this->code = code;
            this->point = point;
            this->time = time;
        }
};

int main(){
    // 변수 선언 및 입력
    string scode;
    char m;
    int time;
    cin >> scode >> m >> time;
    
    // Spy 객체를 만들어 줍니다.
    Spy s = Spy(scode, m, time);

    // 결과를 출력합니다.
    cout << "code : " << s.code << endl;
    cout << "color : " << s.point << endl;
    cout << "second : " << s.time << endl;
    return 0;
}