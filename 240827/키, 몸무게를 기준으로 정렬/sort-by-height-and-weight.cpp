#include <iostream>
#include <string>
#include <algorithm>

#define MAXN 10

using namespace std;

class Student {
public:
    string name;
    int h;
    int w;

    Student (string name, int h, int w)
    : name(name), h(h), w(w) {}

    Student(){}
};

bool Cmp(const Student &a, const Student &b) {
    if(a.h != b.h)
        return a.h < b.h;
    return a.w > b.w;
}

Student students[MAXN];
int main() {
    int n;  cin>>n;

    for(int i=0; i<n; i++) {
        string name;
        int h, w;
        cin>>name>>h>>w;

        students[i] = Student(name, h, w);
    }

    sort(students, students+n, Cmp);

    for(int i=0; i<n; i++) {
        cout<<students[i].name<<" ";
        cout<<students[i].h<<" ";
        cout<<students[i].w<<"\n";
    }
}