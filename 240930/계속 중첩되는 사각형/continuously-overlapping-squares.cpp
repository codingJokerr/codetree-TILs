#include <iostream>
using namespace std;

#define MAXN 10
#define MAXR 200
#define OFFSET 100

int checked[MAXR+1][MAXR+1];

// 빨간색 => 0 => i가 짝수
// 파란색 => 1 => i가 홀수
void Check(int x1, int y1, int x2, int y2, int num) {
    for(int x=x1; x<x2; x++) {
        for(int y=y1; y<y2; y++) {
            checked[x][y] = num;
        }
    }
}


int main() {
    int n;  cin>>n;

    int x1, y1, x2, y2;
    for(int i=0; i<n; i++) {
        cin>>x1>>y1>>x2>>y2;

        int num=0;
        if(i%2==1)  // 홀수인 경우 == 파란색 == 세야하는 경우
            num=1;

        Check(x1+OFFSET, y1+OFFSET, x2+OFFSET, y2+OFFSET, num);
    }

    int area = 0;
    for(int i=0; i<MAXR; i++) {
        for(int j=0; j<MAXR; j++) {
            if(checked[i][j]==1)
                area++;
        }
    }

    cout<<area;
}