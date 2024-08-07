#include <iostream>
using namespace std;

#define MAX_N 100
int A[MAX_N+1];

int GetAnswer(int a1, int a2) {
    int sum=0;
    for(int i=a1; i<=a2; i++) {
        sum+=A[i];
    }
    return sum;
}

int main() {
    int n,m,a1,a2;    cin>>n>>m;

    for(int i=1; i<n+1; i++) {
        cin>>A[i];
    }

    for(int i=0; i<m; i++) {
        cin>>a1>>a2;
        cout<<GetAnswer(a1,a2)<<endl;
    }
}