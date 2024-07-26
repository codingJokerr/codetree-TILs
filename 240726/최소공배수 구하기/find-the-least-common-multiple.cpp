#include <iostream>
#include <algorithm>

using namespace std;

void FindLcm(int n, int m) {
    int lcm=1;
    for(int i=max(n,m); i<=n*m; i++) {
        if((i%n==0)&&(i%m==0)) {
             lcm=i; cout<<lcm;  break;
        }
    }
    
}

int main() {
    int n,m;    cin>>n>>m;

    FindLcm(n, m);
}