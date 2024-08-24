#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 10

using namespace std;

class Student {
public:
    string name;
    int sub1;
    int sub2;
    int sub3;

    Student(string name, int sub1, int sub2, int sub3)
    : name(name), sub1(sub1), sub2(sub2), sub3(sub3) {}

    Student() {}
};

bool cmp(Student a, Student b) {
    return a.sub1+a.sub2+a.sub3 < b.sub1+b.sub2+b.sub3;
}

Student students[MAX_N];
int main() {
    int n;  cin>>n;

    string name;
    int sub1, sub2, sub3;
    for(int i=0; i<n; i++) {
        cin>>name>>sub1>>sub2>>sub3;
        students[i] = Student(name, sub1, sub2, sub3);
    }

    sort(students, students+n, cmp);

    for(int i=0; i<n; i++) {
        cout<<students[i].name<<" "<<students[i].sub1<<" "<<students[i].sub2<<" "<<students[i].sub3<<endl;
    }
}