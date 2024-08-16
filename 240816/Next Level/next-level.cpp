#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string ID;
    int lev;

    Person(string ID = "codetree", int lev = 10) {
        this->ID = ID;
        this->lev = lev;
    }
};

int main() {
    string ID;
    int lev;
    cin>>ID>>lev;

    Person person1 = Person(ID, lev);

    cout<<"user codetree lv 10\n";
    cout<<"user "<<person1.ID<<" lv "<<person1.lev;
}