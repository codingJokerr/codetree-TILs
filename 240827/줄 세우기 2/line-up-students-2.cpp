#include <iostream>
#include <algorithm>

#define MAXN 1000

using namespace std;
// 키 오름차순 => 몸무게 내림차순

class Student {
public:
    int h;
    int w;
    int num;

    Student(int h, int w, int num)
    : h(h), w(w), num(num) {}

    Student(){}
};

bool Cmp(const Student &a, const Student &b) {
    if(a.h != b.h)
        return a.h < b.h;

    return a.w > b.h;
}

Student students[MAXN];
int main() {
    int n;  cin>>n;

    for(int i=0; i<n; i++) {
        int h, w;
        cin>>h>>w;

        students[i] = Student(h, w, i+1);
    }

    sort(students, students+n, Cmp);

    for(int i=0; i<n; i++) {
        cout<<students[i].h<<" ";
        cout<<students[i].w<<" ";
        cout<<students[i].num<<"\n";
    }
}