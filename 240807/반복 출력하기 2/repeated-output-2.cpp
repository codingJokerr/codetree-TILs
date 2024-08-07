#include <iostream>
using namespace std;

void Print(int n) {
    if(n==0) // 종료 조건
        return;

    Print(n-1); // 동일한 함수 f를 다시 이용

    cout<<"HelloWorld\n";   // 함수의 내용
}

int main() {
    int n;  cin>>n;

    Print(n);
}