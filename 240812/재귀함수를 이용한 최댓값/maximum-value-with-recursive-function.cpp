#include <iostream>
using namespace std;

#define MAX_N 100
int arr[MAX_N];

int ans;

int FindMax(int n) {
    if(n==0) return 0;

    if(ans>arr[n]) {
        return FindMax(n-1);
    }
    else {
        ans = arr[n];
        return FindMax(n-1);
    }
}

int main() {
    int n;  cin>>n;

    for(int i=1; i<=n; i++) {
        cin>>arr[i];
    }

    ans = arr[n];
    FindMax(n);
    cout<<ans;
}