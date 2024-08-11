#include <iostream>
using namespace std;

#define MAX_N 100
int arr[MAX_N];

int FindMax(int n) {
    if(n==1) return arr[1];

    if(arr[n]>arr[n-1]) return FindMax(n-2) +arr[n];
    else return FindMax(n-1) +arr[n-1];
}

int main() {
    int n;  cin>>n;

    for(int i=1; i<=n; i++) {
        cin>>arr[i];
    }

    cout<<FindMax(n);
}