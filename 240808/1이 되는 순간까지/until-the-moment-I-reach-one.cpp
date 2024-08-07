#include <iostream>
using namespace std;

int cnt=0;

int MomentOfOne(int n) {
    if(n==1) {
        return 1;
    }

    if(n%2==0) {
        cnt++;
        return MomentOfOne(n/2);
    }
    else {
        cnt++;
        return MomentOfOne(n/3);
    }
}

int main() {
    int n;  cin>>n;

    MomentOfOne(n);

    cout<<cnt;
}