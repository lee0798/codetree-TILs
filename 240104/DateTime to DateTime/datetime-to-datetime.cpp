#include <iostream>
using namespace std;

int main() {
    int day, hour , mins;
    day = 11;
    hour = 11;
    mins = 11;
    int day1, hour1 , mins1;

    cin >> day1 >> hour1 >> mins1;
    int elapsed_time = 0;
    
    
    while(true) {
        if(day1 < 11){
            elapsed_time = -1;
            break;
        }
        if(day1 ==11){
            if(hour1 < 11){
                elapsed_time = -1;
                break;
            }
        }
        if(day1 == 11){
            if(hour1 == 11){
                if(mins1 < 11){
                    elapsed_time = -1;
                    break;
                }
            }
        }
        if(hour1 == hour && mins1 == mins && day1 == day)
            break;
    
        elapsed_time++;
        mins++;
    
        if(mins == 60) {
            hour++;
            mins = 0;
        }
        if(hour == 24){
            day ++;
            hour = 0;
        }
    }
    
    cout << elapsed_time;
    
    return 0;
}