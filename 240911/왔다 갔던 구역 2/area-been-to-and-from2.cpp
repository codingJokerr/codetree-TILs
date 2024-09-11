#include <iostream>

#define MAX_X 2000

using namespace std;

int arr[MAX_X + 1];
int loc=1000;

void Check(int x, char dir) {
    if(dir == 'L') {// 왼쪽으로(-) 움직인다.
        while(x--) {
            loc--;
            arr[loc]++;
        }
    }
    else {// 오른쪽으로(+) 움직인다.
        while(x--) {
            loc++;
            arr[loc]++;
        }
    }
}

// 가능 구간 => -1000 ~ 1000 => 0~2000
int main() {
    int n;  cin>>n;

    for(int i=0; i<n; i++) {
        int x;  char dir;
        cin >> x >> dir;

        Check(x, dir);
    }

    int cnt=0;
    for(int i=0; i<2001; i++) {
        if(arr[i] >=2 ) cnt++;
    }

    cout<<cnt;
}