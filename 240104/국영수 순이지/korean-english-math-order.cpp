#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student {
    public:
        string name; 
        int height, weight, math;

        Student(string name, int height, int weight , int math) {
            this->name = name;
            this->height = height;
            this->weight = weight;
            this->math = math;
        }
        Student(){}
};

bool cmp(Student a, Student b) { 
    if(a.height == b.height){
        if(a.weight == b.weight){
            return a.math > b.math;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
         
}

int main() {
    int n;
    cin >> n;
    Student students[10] = {};
    for(int i = 0 ; i < n ; i ++){
        cin >> students[i].name >>  students[i].height >>  students[i].weight >> students[i].math;
    }

    sort(students, students + n, cmp); 

    for(int i = 0; i < n; i++)
        cout << students[i].name << " " << students[i].height << " " << students[i].weight<< " " << students[i].math<< endl;

    return 0;
}