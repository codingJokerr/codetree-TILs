#include <iostream>
using namespace std;

#define OFFSET 100
#define MAXN 200

int arr[MAXN+1][MAXN+1];

void Check(int x1, int y1, int x2, int y2) {
    for(int i=x1; i<x2; i++) {
        for(int j=y1; j<y2; j++)
            arr[i][j]++;
    }
}



int main() {
    int n;  cin>>n;

    int x1, y1, x2, y2;
    for(int i=0; i<n; i++) {
        cin >> x1 >> y1 >> x2 >> y2;

        Check(x1+OFFSET, y1+OFFSET, x2+OFFSET, y2+OFFSET);
    }

    int cnt=0;
    for(int i=0; i<201; i++) {
        for(int j=0; j<201; j++) {
            if(arr[i][j] > 0)
                cnt++;
        }
    }

    cout<<cnt;
}