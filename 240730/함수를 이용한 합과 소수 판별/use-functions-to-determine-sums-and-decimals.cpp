#include <iostream>
using namespace std;

bool PrimeNumber(int n) {
    if(n==1 || n==2) return false;

    for(int i=2; i<n; i++) {
        if(n%i==0) return false;
    }

    return true;
}

bool JudgeNumber(int n) {
    int sum=0;
    sum = n/100 + (n%100)/10 + n%10;
    // sum = n/100 /*100의 자리 수*/ + n%100/10 /*10의 자리 수*/ + n%10; /* 1의 자리 수*/
    // cout<<n<<": "<< n/100 << (n%100)/10 << n%10<<endl;
    if(sum%2==0) return true;

    return false;
}

int main() {
    int a, b;   cin>>a>>b;

    int cnt=0;
    for(int i=a; i<=b; i++){
        if(PrimeNumber(i) && JudgeNumber(i)) cnt++;
    }
    cout<<cnt;
}