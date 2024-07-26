#include <iostream>
#include <algorithm>

using namespace std;

// 최소공배수(Least Common Multiple) 출력
void FindLCM(int n, int m) {
    int gcd=0;
    for(int i=1; i<=min(n,m); i++) {
        if(n%i==0 && m%i==0)
            gcd=i;
    }

    cout<< n*m/gcd;

    // int lcm=1;
    // for(int i=max(n,m); i<=n*m; i++) {
    //     if((i%n==0)&&(i%m==0)) {
    //          lcm=i; cout<<lcm;  break;
    //     }
    // }  
}

int main() {
    int n,m;    cin>>n>>m;

    FindLCM(n, m);
}