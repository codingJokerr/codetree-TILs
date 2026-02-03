#include <iostream>
using namespace std;

int arr[5][5] = {};
int n=5;

int main() {
    // 첫번째 행,열 1로 초기화
    for(int i=0; i<n; i++)
        arr[i][0] = 1;
    
    for(int j=0; j<n; j++)
        arr[0][j] = 1;


    // 위, 왼쪽 값 더하기
    for(int i=1; i<n; i++) {
        for(int j=1; j<n; j++) {
            arr[i][j] = arr[i-1][j]+arr[i][j-1];
        }
    }


    // 출력
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}