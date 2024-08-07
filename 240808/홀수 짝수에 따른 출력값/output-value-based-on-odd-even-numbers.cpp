#include <iostream>
using namespace std;

int GetSum(int n) {
    if(n==1) return 1;
    if(n==2) return 2;

    if(n%2==0)
        return GetSum(n-2) + n;
    else
        return GetSum(n-2) + n;
}

int main() {
    int n;  cin>>n;

    cout<<GetSum(n);
}