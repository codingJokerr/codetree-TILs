#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 10

using namespace std;

class Student {
public:
    string name;
    int kor;
    int eng;
    int math;

    Student (string name, int kor, int eng, int math) : name(name), kor(kor)
, eng(eng), math(math) {}

    Student() {}
};

bool cmp(Student a, Student b){
    if(a.kor == b.kor){
        if(a.eng == b.eng) {
            return a.math > b.math;
        }
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

Student students[MAX_N];
int main() {
    int n;  cin>>n;

    for(int i=0; i<n; i++) {
        string name;
        int kor, eng, math;
        cin>>name>>kor>>eng>>math;

        students[i] = Student(name, kor, eng, math);
    }

    sort(students, students+n, cmp);

    for(int i=0; i<n; i++)
        cout<<students[i].name<<" "<<students[i].kor<<" "<<students[i].eng<<" "<<students[i].math<<endl;
}