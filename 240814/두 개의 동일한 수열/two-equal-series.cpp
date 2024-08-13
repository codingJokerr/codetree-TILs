#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 100
int A[MAX_N], B[MAX_N];
int n;

bool Judge() {
    for(int i=0; i<n; i++)
        if(A[i]!=B[i]) return false;
    return true;
}

int main() {
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>A[i];
    for(int i=0; i<n; i++)
        cin>>B[i];

    sort(A, A+n);
    sort(B, B+n);

    if(Judge()) cout<<"Yes";
    else cout<<"No";
}