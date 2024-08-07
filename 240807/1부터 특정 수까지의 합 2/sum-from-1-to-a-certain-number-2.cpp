#include <iostream>
using namespace std;

int GetSum(int n) {
    if(n==1) return 1;

    return GetSum(n-1) + n;
}

int main() {
    int n;  cin>>n;

    cout<<GetSum(n);
}