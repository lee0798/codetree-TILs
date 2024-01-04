#include <iostream>
using namespace std;
#include <string>
void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}
int main() {
    int month , day;
    int month2 , day2;

    string wk;


    cin >> month >> day >> month2 >> day2;
    cin >> wk;
    
    int elapsed_days = 0;
    
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
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
    int cnt = 1;
    for(int i = 0; i < elapsed_days; i ++){
        if(week[i%7] == wk){
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}