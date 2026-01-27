#include <iostream>
using namespace std;

int main() {
    int n=4;
    int arr_2d[4][4] = {};  // 4 by 4배열 초기화

    int num=1;  // 채울 숫자 초기값 : 1
    for(int i=0; i<n; i++) {
        if(i%2 == 0) {// i가 짝수인 경우
            for(int j=0; j<n; j++) {// -> 방향으로 수 증가
                arr_2d[i][j] = num;
                num++;
            }
        }
        else {// i가 홀수인 경우
            for(int j=n-1; j>=0; j--) {// <- 방향으로 수 증가
                arr_2d[i][j] = num;
                num++;
            }
        }
    }

    // 출력
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<arr_2d[i][j]<<" ";
        }
        cout<<endl;
    }
}