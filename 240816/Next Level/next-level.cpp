#include <iostream>
#include <string>
using namespace std;

class User {
public:
    string id;
    int lev;

    User(string i ="", int lev =0) {
        this->id = id;
        this->lev = lev;
    }
};

int main() {
    // 초기값을 이용해서 첫 번째 User 객체를 만듦
    User user1 = User();

    // 값 변경
    user1.id = "codetree";
    user1.lev = 10;

    // 변수 선언 및 입력
    string id2;
    int lev2;
    cin>>id2>>lev2;

    // 초기값을 이용해서 두 번째 User 객체를 만듦
    User user2 = User();    //  0

    // 입력받은 값을 넣어, 값 변경
    user2.id = id2;
    user2.lev = lev2;

    // 출력
    cout<<"user "<<user1.id<<" lv "<<user1.lev<<endl;
    cout<<"user "<<user2.id<<" lv "<<user2.lev;
}