#include <iostream>
using namespace std;

void Quat(int n) {// 4진
    int digits[20] = {};
    int cnt=0;
    while (true) {
        if(n < 4) {
            digits[cnt++] = n;
            break;
        }
    
        digits[cnt++] = n % 4;
        n /= 4;
    }
    
    // print binary number
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];

}

void Octal(int n) {// 8진수
    int digits[20] = {};
    int cnt=0;
    while (true) {
        if(n < 8) {
            digits[cnt++] = n;
            break;
        }
    
        digits[cnt++] = n % 8;
        n /= 8;
    }
    
    // print binary number
    for(int i = cnt - 1; i >= 0; i--)
        cout << digits[i];
} 

int main() {
    int n;   int b;    
    cin>>n>>b;

    int ans=0;
    if(b==4) {
        Quat(n);
    }
    else if(b==8) {
        Octal(n);
    }
}