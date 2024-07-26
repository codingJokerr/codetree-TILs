#include <iostream>
using namespace std;

int Add(int N) {
    int total=0;
    for(int i=1; i<=N; i++) {
        total+=i;
    }
    return total;
}

int main(){
    int N; cin>>N;
    int total;
    total=Add(N);
    cout<<total/10;
}