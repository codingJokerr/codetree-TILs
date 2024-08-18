#include <iostream>
#include <algorithm>

#define MAX_N 100

using namespace std;

int arr[MAX_N];

void FindMid(int n) {
    sort(arr, arr+n);
    cout<<arr[n/2]<<" ";
}

void FindOdd(int n) {
    for (int i=1; i<=n; i++) {
        if(i%2==1)
            FindMid(i);
    }
}

int main() {
    int n;  cin>>n;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    FindOdd(n);
}