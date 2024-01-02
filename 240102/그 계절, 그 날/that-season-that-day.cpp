#include <iostream>

using namespace std;

int fun(int m) {
    if(m == 2)
        return 28;
    if(m == 4 || m == 6 || m == 9 || m == 11)
        return 30;
    
    return 31;
}


bool fun3(int y){
    if(y % 400 ==0 )
    return true;
    if(y % 100 == 0)
    return false;
    if(y % 4 == 0)
    return true;
    
    return false;
}

bool fun2(int y, int m, int d) {
    if(fun3(y) == false){
         if(m <= 12 && d <= fun(m))
        return true;
    
    return false;
    }
    else{
        if(m == 2 && d <= fun(m) + 1){
            return true;
        }
        if(m <= 12 && d <= fun(m))
        return true;
    
    return false;

    }

}
    

int main() {

    int y, m, d;
    cin >> y >> m >> d;
    
    if(fun2(y, m, d))
        if(m == 3||m == 4 || m ==5)
        cout << "Spring";
        else if(m == 6||m == 7 || m ==8)
        cout << "Summer";
        else if(m == 9||m == 10 || m ==11)
        cout << "Fall";
        else
        cout << "Winter";
    else
        cout << -1;

    return 0;
}