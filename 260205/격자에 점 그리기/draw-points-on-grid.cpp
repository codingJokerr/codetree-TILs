#include <iostream>
using namespace std;

int arr[10][10]= {};
int n, m;

int main() {
    cin>>n>>m;

    int r, c;
    int cnt=1;
    while(m--) {
        cin>>r>>c;
        arr[r][c] = cnt;
        cnt++;
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) 
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}