#include <iostream>
using namespace std;

// 윤년 - true - 4의 배수, 100으로 나누어지면서 400으로는 않 나누어
// 평년 - false

bool FindLeapYear(int y) {
    if(y%4 != 0)
        return false;
    if(y%100!=0 || y%400==0)
        return true;
    return false;
}

int main() {
    int y;  cin>>y;

    if(FindLeapYear(y)) {cout<<"true";}
    else cout<<"false";
}