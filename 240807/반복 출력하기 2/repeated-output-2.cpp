#include <iostream>
using namespace std;

// 1부터 n번째 줄까지 문자열을 출력하는 함수
void Print(int n) {
    if(n==0) // 종료 조건
        return;

    Print(n-1); // 1부터 n-1번째 줄까지 출력하는 함수
    // 동일한 함수 f를 다시 이용

    cout<<"HelloWorld\n";   // 함수의 내용
}

int main() {
    int n;  cin>>n;

    Print(n);
}