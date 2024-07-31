#include <iostream>
using namespace std;

int Day[13]={-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool IsExist(int M, int D) {
    if(M > 12) return false;

    if(Day[M]<D) return false;

    return true;
}

int main() {
    int M,D;    cin>>M>>D;

    if(IsExist(M, D))
        cout<<"Yes";
    else 
        cout<<"No";
}