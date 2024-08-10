#include <iostream>
using namespace std;

#define MAX_N 100
int arr[MAX_N];

// 6
// 1 5 7 9 2 6
int max_n=0;
int FindLargest(int n) {
    if(n==0) return arr[0];

    if(arr[n]>arr[n-1]) {
        max_n = arr[n];
        return FindLargest(n-1);
    }
    else {
        max_n = arr[n-1];
        return FindLargest(n-1);
    }
}

int main() {
    int n;  cin>>n;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    FindLargest(n);
    cout<<max_n;
}