#include <iostream>
using namespace std;

void IsMagicNumber(int n) {
    int N=(n/10) + (n%10);
    if(n%2==0 && N%5==0)
        cout<<"Yes";
    else
        cout<<"No";
}

int main() {
    int n;  cin>>n;

    IsMagicNumber(n);
}