#include <iostream>
using namespace std;

void Modify(int &a, int &b) {
    if(a>b) {
        a+=25;
        b*=2;
    }
    else {
        b+=25;
        a*=2;
    }
}

int main() {
    int a, b;   cin>>a>>b;

    // int max=a, min=b;
    // if(a<b){
    //     min=a;
    //     max=b;
    // }
    // Modify(max, min);
    Modify(a,b);
    cout<<a<<" "<<b;
}