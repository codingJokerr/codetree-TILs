#include <iostream>
using namespace std;

int Power(int a, int b) {
    int N=1;
    for(int i=0; i<b; i++) N*=a;
    
    return N;
}

int main() {
    int a,b;    cin>>a>>b;

    cout<<Power(a,b);
}