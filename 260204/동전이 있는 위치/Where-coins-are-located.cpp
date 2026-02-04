#include <iostream>
using namespace std;

int arr[10][10] = {};
int n, m;

int main() {
    cin>>n>>m;

    int r, c;
    while(m--) {
        // 행/열 입력받기
        cin>>r>>c;

        arr[r][c] = 1;
    }

    // 출력
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}