#include <iostream>
using namespace std;

int M3P1(int n) {
    if(n==1) return 0;

    if(n%2==0) return M3P1(n/2) +1;
    else return M3P1((n*3)+1) +1;
}

int main() {
    int n;  cin>>n;

    cout<<M3P1(n);
}