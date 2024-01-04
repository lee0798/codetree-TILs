#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student {
    public:
        int height, weight, num;

        Student(int height, int weight , int num) {
            this->height = height;
            this->weight = weight;
            this->num = num;
        }
        Student(){}
};

bool cmp(Student a, Student b) {
    if(abs(a.height) + abs(a.weight) == abs(b.height) + abs(b.weight)){
        return a.num < b.num;
    }
    return abs(a.height) + abs(a.weight) < abs(b.height) + abs(b.weight);
}

int main() {
    int n;
    cin >> n;
    Student students[1000] = {};
    for(int i = 0 ; i < n ; i ++){
        students[i].num = i+1;
        cin >> students[i].height >>  students[i].weight;
    }

    sort(students, students + n, cmp); 

    for(int i = 0; i < n; i++)
        cout << students[i].num<< endl;

    return 0;
}