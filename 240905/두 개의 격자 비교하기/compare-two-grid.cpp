#include <iostream>
using namespace std;

#define MAXN 10
#define MAXM 10

int arr1[MAXN][MAXM];
int arr2[MAXN][MAXM];
int ans[MAXN][MAXM];
int main() {
    int n, m;   cin>>n>>m;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
            cin>>arr1[i][j];
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
            cin>>arr2[i][j];
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr1[i][j] == arr2[i][j])
                ans[i][j] = 0;
            else
                ans[i][j] = 1;
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}