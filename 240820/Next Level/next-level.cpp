#include <iostream>
#include <string>
#include <utility>

using namespace std;

// class User {
// public:
//     string id;
//     int lev;

//     User(string i ="", int lev =0) {
//         this->id = id;
//         this->lev = lev;
//     }
// };

// User 정보 나타내는 pair 선언
pair<string, int> user1 = make_pair("codetree", 0);
pair<string, int> user2;

int main() {
    // 변수 선언 및 입력
    string user2_id;
    int user2_level;
    cin>>user2_id>>user2_level;

    // 두번째 유저 정보 등록
    user2 = make_pair(user2_id, user2_level);

    // 출력
    cout<<"user "<<user1.first<<" lv "<<user1.second<<endl;
    cout<<"user "<<user2.first<<" lv "<<user2.second<<endl;


    // // 초기값을 이용해서 첫 번째 User 객체를 만듦
    // User user1 = User();

    // // 값 변경
    // user1.id = "codetree";
    // user1.lev = 10;

    // // 변수 선언 및 입력
    // string id2;
    // int lev2;
    // cin>>id2>>lev2;

    // // 초기값을 이용해서 두 번째 User 객체를 만듦
    // User user2 = User();    //  0

    // // 입력받은 값을 넣어, 값 변경
    // user2.id = id2;
    // user2.lev = lev2;

    // // 출력
    // cout<<"user "<<user1.id<<" lv "<<user1.lev<<endl;
    // cout<<"user "<<user2.id<<" lv "<<user2.lev;
}

// class를 정의하면 객체를 생성해 새로운 학생 정보를 만들어 낼 수 있다.
// 객체 생성시 멤버 변수의 개수만큼 값이 주어지지 않으면 에러가 발생 => 초기값
// class Student {
// public:
//     int kor, eng, math;

//     Student(int kor=0, int eng=0, int math=0) {// 초기값 설정
//         this->kor = kor;
//         this->eng = eng;
//         this->math = math;
//     }
// };

// Student student1 = Student(90, 80, 90); // 넘어간 값(90, 80, 90) 사용
// Student student2 = Student();   // 기본값(0, 0, 0) 사용

// 객체에 이미 들어있는 값 변경하기
// 객체이름.매개변수이름 = 바꿀 값
// student2.kor = 70;
// student2.eng = 80;
// student2.math = 90;

// tuple에는 기본값이라는 개념이 없으므로
// 원하는 값이 정해지지 않은 경우라면 적절한 초기값을 직접 넣어주며 생성
// tuple<int, int, int> student1 = make_tuple(0, 0, 0);
// int kor, eng, math;
// tie(kor, eng, math) = student1;

// 값 변경하기
// get을 이용해도 되지만, 의미상 새로운 tuple을 생성하는 편이 더 좋다.
// tuple<int, int, int> student1 = make_tuple(0, 0, 0);
// int kor, eng, math;
// tie(kor, eng, math) = student1;
// cout<<kor<<" "<<eng<<" "<<math<<endl;   // 0 0 0

// // 수학 점수만 90점으로 바꾸어 새로운 tuple 생성
// student1 = make_tuple(kor, eng, 90);

// tie(kor, eng, math) = student1;
// cout<<kor<<" "<<eng<<" "<<math<<endl;   // 0 0 90