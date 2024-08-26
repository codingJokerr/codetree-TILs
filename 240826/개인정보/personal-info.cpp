#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class User {
public:
    string name;
    int h;
    double w;

    User(string name, int h, double w)
    : name(name), h(h), w(w) {}

    User(){}
};

bool cmpN(User a, User b) {// 이름 순
    return a.name < b.name;
}

bool cmpH(User a, User b) {// 키가 큰 순
    return a.h > b.h;
}

int main() {
    User users[5];

    string name;
    int h;
    double w;
    for(int i=0; i<5; i++) {
        cin>>name>>h>>w;
        users[i] = User(name, h, w);
    }

    cout<<fixed;
    cout.precision(1);

    sort(users, users+5, cmpN);
    cout<<"name\n";
    for(int i=0; i<5; i++) {
        cout<<users[i].name<<" ";
        cout<<users[i].h<<" ";
        cout<<users[i].w<<"\n";
    }

    sort(users, users+5, cmpH);
    cout<<"\nheight\n";
    for(int i=0; i<5; i++) {
        cout<<users[i].name<<" ";
        cout<<users[i].h<<" ";
        cout<<users[i].w<<"\n";
    }
}