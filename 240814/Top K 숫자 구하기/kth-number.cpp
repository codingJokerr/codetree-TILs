#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 1001
int arr[MAX_N];

int main() {
    int n,k;  cin>>n>>k;

    for(int i=1; i<=n; i++)
        cin>>arr[n];

    sort(arr, arr+n+1);

    cout<<arr[k];
}