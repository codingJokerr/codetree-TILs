#include <iostream>
using namespace std;

#define MAX_N 10

int arr[MAX_N][MAX_N];
int main() {
    int n;  cin>>n;

    int cnt=1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            arr[j][i] = cnt;
            cnt++;
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) 
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}