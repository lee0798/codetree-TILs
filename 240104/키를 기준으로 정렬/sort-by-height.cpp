#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student {
    public:
        string name; 
        int height, weight;

        Student(string name, int height, int weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        Student(){}
};

bool cmp(Student a, Student b) { 
    return a.height < b.height; 
}

int main() {
    int n;
    cin >> n;
    Student students[10] = {};
    for(int i = 0 ; i < n ; i ++){
        cin >> students[i].name >>  students[i].height >>  students[i].weight;
    }

    sort(students, students + n, cmp); 

    for(int i = 0; i < n; i++)
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;

    return 0;
}