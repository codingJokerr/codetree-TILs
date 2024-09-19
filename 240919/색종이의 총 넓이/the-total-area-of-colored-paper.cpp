#include <iostream>
using namespace std;

// 범위: -100~100 => 0~200, OFFSET 100
#define OFFSET 100
#define MAXN 100    // n번 입력 받음
#define MAXR 200    // 전체 범위

int x[MAXN], y[MAXN];
int checked[MAXR+1][MAXR+1];

int main() {
    int n;  cin>>n;

    for(int i=0; i<n; i++) {
        cin >> x[i] >> y[i];

        x[i] += OFFSET;
        y[i] += OFFSET;
    }

    for(int i=0; i<n; i++) {// n번 반복
        for(int j=x[i]; j<x[i]+8; j++)
            for(int k=y[i]; k<y[i]+8; k++)
                checked[j][k] = 1;
    }

    int area = 0;
    for(int i=0; i<MAXR+1; i++) {
        for(int j=0; j<MAXR+1; j++) {
            if(checked[i][j] == 1)
                area++;
        }
    }

    cout<<area;
}