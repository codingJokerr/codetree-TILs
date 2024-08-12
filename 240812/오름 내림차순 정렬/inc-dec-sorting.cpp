#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define MAX_N 100
int arr[MAX_N];

int main() {
    int n;  cin>>n;
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    sort(arr, arr+n, greater<int>());
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
}