#include <iostream>
#include <tuple>
#include <string>

using namespace std;

// class OO7 {
// public:
//     string code;
//     char location;
//     int time;

//     OO7(string code, char location, int time) {
//         this->code = code;
//         this->location = location;
//         this->time = time;
//     }
// };

/*tuple 사용*/
tuple<string, char, int> spy;

int main() {
    string code;
    char location;
    int time;

    cin>>code>>location>>time;

    // tuple type의 데이터 하나 생성
    spy = make_tuple(code, location, time);

    // tuple 값들 변수에 대입
    string r_code;
    char r_location;
    int r_time;
    tie(r_code, r_location, r_time) = spy;

    // 결과 출력
    cout<<"secret code : "<<r_code<<endl;
    cout<<"meeting point : "<<r_location<<endl;
    cout<<"time : "<<r_time<<endl;
}


// 하나의 새로운 형태(학생), 이를 이루는 요소(과목) => class
// // class 정의
// class Student {
// public:
//     int k, e, m; // 멤버 변수

//     Student(int kor, int eng, int math) {// 생성자
//         this->k = kor;
//         this->e = eng;
//         this->m = math;
//     }
// };

// // class 사용
// int main(){
//     // 객체(student1) 생성
//     Student student1 = Student(90, 80, 90);
//     cout<<student1.k<<endl; // 90
//     cout<<student1.e<<endl; // 80
//     cout<<student1.m<<endl; // 90
// }



// 크게 복잡하지 않은 경우 => tuple
// #include <tuple>
// tuple<int, int, int> t;
// tuple<int, int, int> t = make_tuple(30, 15, 40);

// // 값 사용 => get함수 사용
// get<index>(tuple값)
// tuple<int, int, int> t = make_tuple(30, 15, 40);
// int v1 = get<0>(t); // 30
// int v2 = get<1>(t); // 15
// int v3 = get<2>(t); // 40

// tie 함수 이용할 수도 있다.
// tie 안에 tuple에 있는 값을 꺼내 넣어주고 싶은 변수 이름 적기
// tuple<int, int, int> t = make_tuple(30, 15, 40);
// int v1, v2, v3;
// tie(v1, v2, v3) = t;    // v1, v2, v3에 각각 30 15 40 넣기

// 필요하지 않은 값의 위치에서 ignore 적음
// tuple<int, int, int> t = make_tuple(30, 15, 40);
// int v1;
// tie(v1, ignore, ignore) = t;    // v1에 30만 넣기

// tuple 이용 경우 각 값이 무엇을 의미하는 지 알기 어렵기에
// tuple 값을 받아 줄 변수에 적절한 이름을 붙여야한다.

// tuple<int, int, int> student1 = make_tuple(80, 90, 80);
// int kor, eng, math;
// tie(kor, eng, math) = student1;
// cout<<kor<<" "<<eng<<" "<<math; // 90 80 90



// 사용할 숫자가 정확히 2개인 경우 => pair 사용
// tuple과 사용 방법 비슷
// #include <utility>
// pair<int, int> p = make_pair(1, 5);
// cout<<p.first<<endl;    // 1
// cout<<p.second<<endl;   // 5

// p.first = 10;
// p.second = 52;

// cout<<p.first<<endl;    // 10
// cout<<<p.second<<endl;  // 52