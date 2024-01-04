#include <iostream>
using namespace std;

int main() {
    int hour1 , mins1;
    int hour2 , mins2;
    cin >> hour1 >> mins1 >> hour2 >> mins2;
    int elapsed_time = 0;
    
    while(true) {
        if(hour1 == hour2 && mins1 == mins2)
            break;
    
        elapsed_time++;
        mins1++;
    
        if(mins1 == 60) {
            hour1++;
            mins1 = 0;
        }
    }
    
    cout << elapsed_time;
    
    return 0;
}