#include <iostream>

#define MAXN 101

using namespace std;

int arr[MAXN];

void StackBlocks(int st, int end) {
    for(int i=st; i<=end; i++) {
        arr[i]++;
    }
}

int main() {
    int n, k;   cin>>n>>k;

    for(int i=0; i<k; i++) {
        int start, end;
        cin>>start>>end;

        StackBlocks(start, end);
    }

    int max = arr[1];
    for(int i=2; i<=n+1; i++) {
        if(max < arr[i]) 
            max = arr[i];
    }

    cout<<max;
}