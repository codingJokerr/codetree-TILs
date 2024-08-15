#include <iostream>
#include <string>

using namespace std;

class OO7 {
public:
    string code;
    char location;
    int time;

    OO7(string code, char location, int time) {
        this->code = code;
        this->location = location;
        this->time = time;
    }
};

int main() {
    string code;
    char location;
    int time;

    cin>>code>>location>>time;

    OO7 a1 = OO7(code, location, time);
    cout<<"secret code : "<<a1.code<<endl;
    cout<<"meeting point : "<<a1.location<<endl;
    cout<<"time : "<<a1.time;
}