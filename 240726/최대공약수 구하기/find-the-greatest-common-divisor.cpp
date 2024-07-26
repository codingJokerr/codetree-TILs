#include <iostream>
using namespace std;

void Gcdivision(int n, int m) {
    int gcd=1;
    for(int i=2; i<100; i++){
        if(n%i==0){
            if(m%i==0){
                if(gcd<i)
                    gcd=i;
            }
        }
    }
    cout<<gcd;
}

int main() {
    int a, b;   cin>>a>>b;

    Gcdivision(a, b);
}