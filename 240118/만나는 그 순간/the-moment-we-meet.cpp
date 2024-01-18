#include <iostream>
using namespace std;
#include <string>
class Dir {
    public:
        char point;
        int time;
        Dir(){}
        Dir(char point, int time) {
            this->point = point;
            this->time = time;
        }
};
int main() {
    int a,b ;
    cin >> a >> b;
    int time = 1;
    int aloc[1000000], bloc[1000000];
    Dir adir[1000];
    for(int i = 0; i < a ; i ++){
        adir[i] = Dir();
        cin >> adir[i].point >> adir[i].time;
        while(adir[i].time--){
            if(adir[i].point == 'R')
                aloc[time] = aloc[time-1] +1;
            else
                 aloc[time] = aloc[time-1] -1;
            time ++;
        }
    }
    time = 1;
    Dir bdir[1000];
    for(int i = 0; i < b ; i ++){
        bdir[i] = Dir();
        cin >> bdir[i].point >> bdir[i].time;
         while(bdir[i].time--){
            if(bdir[i].point == 'R')
                bloc[time] = bloc[time-1] +1;
            else
                 bloc[time] = bloc[time-1] -1;
            time ++;
        }
    }
    for(int i = 1 ;i < time; i ++){
        if(aloc[i] == bloc[i]){
            cout << i;
            break;
        }
    }
    return 0;
}