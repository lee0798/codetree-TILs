#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student {
    public:
        string name; 
        int height;
        double weight;

        Student(string name, int height, double weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        Student(){}
};

bool cmp(Student a, Student b) { 
    return a.name < b.name;
}
bool cmp2(Student a, Student b) { 
    return a.height > b.height;
}

int main() {
    Student students[10] = {};
    for(int i = 0 ; i < 5 ; i ++){
        cin >> students[i].name >>  students[i].height >>  students[i].weight;
    }

    sort(students, students + 5, cmp); 
    cout << "name"<< endl;
    for(int i = 0; i < 5; i++)
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;

    cout << endl;
    sort(students, students + 5, cmp2); 
    cout << "height"<< endl;
    for(int i = 0; i < 5; i++)
        cout << students[i].name << " " << students[i].height << " " << students[i].weight << endl;

    return 0;
}