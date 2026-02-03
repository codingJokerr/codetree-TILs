#include <iostream>
using namespace std;

int n;
int arr[10][10];
int cnt=1;

int main() {
    cin>>n;
    int start = 1;

    for(int i=n-1; i>=0; i--) {
        if(start%2 == 1) {// i가 홀수인 경우 => 위로 올라감 (3,3)(0,3) i감수
            for(int j=n-1; j>=0; j--) {
                arr[j][i] = cnt;
                cnt++;
            }
        }
        else {// i가 짝수인 경우 => 아래로 (0,2)(3,2)
            for(int j=0; j<n; j++) {
                arr[j][i] = cnt;
                cnt++;
            }
        }
        start++;
    }

    // 출력
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}