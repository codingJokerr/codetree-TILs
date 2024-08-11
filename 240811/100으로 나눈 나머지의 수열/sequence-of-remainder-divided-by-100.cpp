#include <iostream>
using namespace std;

int Remain(int N) {
        if(N==1) return 2;
        if(N==2) return 4;
        if(N>=3) return (Remain(N-1)*Remain(N-2))%100;
}

int main() {
    int N;  cin>>N;

    cout<<Remain(N);
}