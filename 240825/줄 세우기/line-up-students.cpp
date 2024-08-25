#include <iostream>
#include <algorithm>

#define MAXN 1000

using namespace std;

class Student {
public:
    int h;
    int w;
    int num;

    Student(int h, int w, int num) : h(h), w(w), num(num) {}

    Student() {};
};

bool cmp(Student a, Student b) {// 내림차순, 키-몸무게-번호 순 비교
    if(a.h != b.h)
        return a.h > b.h;
    if(a.w != b.w)
        return a.w > b.w;
    return a.num < b.num;
}

Student students[MAXN];
int main() {
    int n;  cin>>n;

    int num = 1;
    for(int i=0; i<n; i++) {
        int h, n;
        cin>>h>>n;
        students[i] = Student(h, n, num);
        num++;
    }

    sort(students, students+n, cmp);

    for(int i=0; i<n; i++) {
        cout<<students[i].h<<" "<<students[i].w<<" "<<students[i].num<<endl;
    }
}