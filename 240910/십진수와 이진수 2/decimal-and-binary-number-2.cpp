#include <iostream>
using namespace std;

int main() {
    string binary;
    cin >> binary;

    int num = 0;
    for(int i = 0; i < (int) binary.size(); i++)
        num = num * 2 + (binary[i] - '0');

    num *= 17;

    int digits[20] = {};
    int cnt=0;
    while(true) {
        if(num<2) {// 더 나누어질 수 없는 경우 while문을 나간다.
            digits[cnt++] = num;
            break;
        }

        digits[cnt++] = num%2;    // 나머지 저장
        num /= 2;                 // 몫은 또 2로 나누어야 한다.
    }

    for(int i=cnt-1; i>=0; i--)
        cout<<digits[i];
    
}