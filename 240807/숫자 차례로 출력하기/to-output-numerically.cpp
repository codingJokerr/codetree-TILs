#include <iostream>
using namespace std;

void Ascending(int N) {// 오름차순으로 출력
    if(N==0) return;

    Ascending(N-1);
    cout<<N<<" ";
}

void Descending(int N) {// 내림차순으로 출력
    if(N==0) return;

    cout<<N<<" ";
    Descending(N-1);
}

int main() {
    int N;  cin>>N;

    Ascending(N);
    cout<<endl;
    Descending(N);
}