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
    
    int ans1 = arr[N] + arr[N-1];
    int ans2 = arr[0] + arr[2*N-1];
    
    if(ans1>ans2)
        cout<<ans1;
    else
        cout<<ans2;
}