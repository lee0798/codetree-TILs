#include <iostream>
#include <algorithm>

#define NUM 1000

using namespace std;

class Number{
    public:
        int number;
        int index;
        Number(int number, int index) {
            this->number = number;
            this->index = index;
        }
		Number(){}
};

bool Cmp(Number a, Number b) {
    if(a.number == b.number)
        return a.index < b.index;
    return a.number < b.number;
}

Number numbers[NUM];

int main() {
    int n, num;
    int real[NUM];

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        numbers[i] = Number(num, i);
    }

    sort(numbers, numbers + n, Cmp);
    for(int i = 0; i < n; i++) 
        real[numbers[i].index] = i + 1; 

    for(int i = 0; i < n; i++){
        cout << real[i] << " ";
    }

    
    

    return 0;
}