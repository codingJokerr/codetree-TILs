#include <iostream>
using namespace std;

int Sum(int sq) {
    if(sq<10) return sq;

    return Sum(sq/10) + Sum(sq%10);
}

int main() {
    int a, b, c;    cin>>a>>b>>c;

    cout<<Sum(a*b*c);
}