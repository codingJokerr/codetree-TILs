#include <iostream>
#include <algorithm>

using namespace std;

// n과 m의 최대공약수(Greatest Common Division) 출력하는 함수
void FindGcd(int n, int m) {
    int gcd=0;
    for(int i=1; i<=min(n,m); i++) {// 작은 수보다 큰 수로는 나누어 떨어질 수 없다.
        if(n%i==0 && m%i==0)    
            gcd=i;  // i가 커지면서 gcd를 구하므로 굳이 이전의 gcd값과 비교할 필요X
            // 즉, 갱신되는 gcd값은 "항상" 이전 값보다 크다!
    }
    cout<<gcd;

    // int gcd=1;
    // for(int i=2; i<=100; i++){
    //     if(n%i==0){
    //         if(m%i==0){
    //             if(gcd<i)
    //                 gcd=i;
    //         }
    //     }
    // }
    cout<<gcd;
}

int main() {
    int n,m;    cin>>n>>m;

    FindGcd(n, m);
}