#include <iostream>
using namespace std;

int arr[10][10] = {};
int n;

int main() {
    cin>>n;

    // 초기화 : 첫번째 행/열 1
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            arr[i][0] = 1;
            arr[0][j] = 1;
        }
    }


    for(int i=1; i<n; i++) {
        for(int j=1; j<n; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1] + arr[i-1][j-1];
        }
    }



    // 출력
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}