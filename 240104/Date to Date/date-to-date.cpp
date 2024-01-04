#include <iostream>
using namespace std;

int main() {
    int month , day;
    int month2 , day2;
    cin >> month >> day >> month2 >> day2;
    int elapsed_days = 0;
    
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    while(true) {
        if(month == month2 && day == day2)
            break;
    
        elapsed_days++;
        day++;
    
        if(day > num_of_days[month]) {
            month++;
            day = 1;
        }
    }
    
    cout << elapsed_days;
    
    return 0;
}