#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    string name;
    int num1;
    int num2;
    string loc;

    Person(string name="", int num1=0, int num2=0, string loc="") {
        this->name = name;
        this->num1 = num1;
        this->num2 = num2;
        this->loc = loc;
    }
};

int main() {
    Person people[10];
    int n;  cin>>n;

    string name, loc;
    int num1, num2;
    for(int i=0; i<n; i++) {
        cin>>name>>num1>>num2>>loc;
        people[i] = Person(name, num1, num2, loc);
    }

    int idx = 0;
    for(int i=1; i<n; i++) {
        if(people[idx].name<people[i].name)
            idx = i;
    }

    cout<<"name "<<people[idx].name<<"\naddr "<<people[idx].num1<<people[idx].num2<<endl;
    cout<<"city "<<people[idx].loc;
}