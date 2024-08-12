#include <iostream>
using namespace std;

int Seq(int N) {
    if(N==1) return 1;
    if(N==2) return 2;

    if(N>=3) return Seq(N/3)+Seq(N-1);
}

int main() {
    int N;  cin>>N;

    cout<<Seq(N);
}