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
    bool sm ;
    sm =true;
    

    cin >> month >> day >> month2 >> day2;
    if(month2 < month){
        swap(&month, &month2);
        swap(&day, &day2);
        sm = false;
    }
    if(month2 == month){
        if(day2 < day){
            swap(&month, &month2);
            swap(&day, &day2);
            sm =false;
        }
    }
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
    if(sm){
        cout << week[elapsed_days % 7];
    }else{
        cout << week[7- elapsed_days % 7];
    }
    
    
    return 0;
}