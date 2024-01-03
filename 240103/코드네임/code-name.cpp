#include <iostream>
#include <string>

using namespace std;

class Spy {
    public:
        char code;
        int score;
        Spy(char code , int score) {
            this->code = code;
            this->score = score;
        }
        Spy(){}
};

int main(){
    // 변수 선언 및 입력
    char scode;
    int sscore;
    Spy s[5];
    for(int i = 0; i < 5;i ++){
        cin >> scode >> sscore;
        s[i] = Spy(scode,sscore);
    }
    int minidx = 0;
    for(int i = 0;i < 5; i++){
        if(s[minidx].score > s[i].score)
            minidx = i;
    }
    cout << s[minidx].code<< " " << s[minidx].score;
    return 0;
}