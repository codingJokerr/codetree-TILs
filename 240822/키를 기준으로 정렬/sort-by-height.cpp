#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 10

using namespace std;

class Person {
public:
    string name;
    int height;
    int weight;

    Person (string name, int height, int weight) {
        this->name = name;
        this-> height = height;
        this->weight = weight;
    }

    Person() {}
};

bool cmp(Person a, Person b) {
        return a.height < b.height;
    }

Person people[MAX_N];

int main() {
    int n;  cin>>n;

    string name;    int height, weight;
    for(int i=0; i<n; i++) {
        cin>>name>>height>>weight;
        people[i] = Person(name, height, weight);
    }

    sort(people, people+n, cmp);

    for(int i=0; i<n; i++) {
        cout<<people[i].name<<" "<<people[i].height<<" "<<people[i].weight<<endl;
    }
}