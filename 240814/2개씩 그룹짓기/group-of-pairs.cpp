#include <iostream>
#include <algorithm>

#define MAX_N 2000

using namespace std;

int arr[MAX_N];
int N;

int main() {
    cin>>N; // N개의 원소 그룹이 생성

    for(int i=0; i<2*N; i++)
        cin>>arr[i];
    
    sort(arr, arr+2*N);

    cout<<arr[N/2]+arr[N/2+1];
}