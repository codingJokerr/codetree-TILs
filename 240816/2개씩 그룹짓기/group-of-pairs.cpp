#include <iostream>
#include <algorithm>

#define MAX_2N 2000
int arr[MAX_2N];

using namespace std;

int main() {
    int N;  cin>>N;

    for(int i=0; i<2*N; i++) {
        cin>>arr[i];
    }

    sort(arr, arr+2*N);
    
    int ans = arr[N] + arr[N-1];
    cout<<ans;
}