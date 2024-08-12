#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 100
int arr[MAX_N];

// a번째까지 인덱스의 숫자 중 가장 큰 값을 반환한다.
int MaxValue(int a) {
    if(a==0)
        return arr[0];

    return max(MaxValue(a-1), arr[a]);
}

// int FindMax(int n) {
//     if(n==0) return 0;

//     if(ans>arr[n]) {
//         return FindMax(n-1);
//     }
//     else {
//         ans = arr[n];
//         return FindMax(n-1);
//     }
// }

int main() {
    int n;  cin>>n;

    for(int i=0; i<n; i++)
        cin>>arr[i];

    cout<<MaxValue(n-1);
}