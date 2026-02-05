#include <iostream>
using namespace std;

int arr[11][11];
int n, m;

int main() {
    cin>>n>>m;

    int r, c;
    while(m--) {
        cin>>r>>c;
        arr[r][c] = r*c;
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) 
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}