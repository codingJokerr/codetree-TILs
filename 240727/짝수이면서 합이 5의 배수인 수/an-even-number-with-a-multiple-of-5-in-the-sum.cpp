#include <iostream>
using namespace std;

bool IsMagicNumber(int n) {
    return n%2==0 && (n/10 + (n%10))%5==0;
    // 맞으면 true 반환
}

int main() {
    int n;  cin>>n;

    if(IsMagicNumber(n))
        cout<<"Yes";    // true가 반환된 경우
    else   
        cout<<"No";     // false가 반환된 경우
}