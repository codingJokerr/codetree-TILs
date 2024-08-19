#include <iostream>
using namespace std;

class Bomb {
public:
    string code;
    string color;
    int second;

    Bomb(string code="", string color="R", int second=0) {
        this->code = code;
        this->color = color;
        this->second = second;
    }
};

int main() {
    string code;
    string color;
    int second;

    cin>>code>>color>>second;

    Bomb bomb1 = Bomb(code, color, second);

    cout<<"code : "<<bomb1.code<<"\ncolor : "<<bomb1.color<<"\nsecond : "<<bomb1.second;
}