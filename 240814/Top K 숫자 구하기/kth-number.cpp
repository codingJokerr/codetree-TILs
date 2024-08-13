#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 1000
int arr[MAX_N];

int main() {
    int n,k;  cin>>n>>k;

    for(int i=0; i<n; i++)
        cin>>arr[n];

    sort(arr, arr+n+1);

    cout<<arr[k+1];
}