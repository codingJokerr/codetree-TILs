#include <iostream>
using namespace std;

int arr[15][15] = {};
int n;

int main() {
    cin>>n;

    // 초기화 : 첫번째 col에 대하여, 대각선에 대하여 => 1
    for(int i=0; i<n; i++) {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }

    for(int i=1; i<n; i++) {
        for(int j=1; j<n; j++) {
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }





    // 출력
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i>=j) {
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}