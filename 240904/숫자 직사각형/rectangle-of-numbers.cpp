#include <iostream>
using namespace std;

#define MAX_N 100
#define MAX_M 100

int arr[MAX_N][MAX_M];
int main() {
    int n,m;    cin>>n>>m;

    int cnt=1;
    for(int i=0; i<n; i++) {// 줄
        for(int j=0; j<m; j++) {
            arr[i][j]=cnt;
            cnt++;
        }
    }

    for(int i=0; i<n; i++) {// 줄
        for(int j=0; j<m; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}