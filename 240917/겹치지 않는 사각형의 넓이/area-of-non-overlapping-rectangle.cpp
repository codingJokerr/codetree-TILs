#include <iostream>
using namespace std;

#define MAX_N 10
#define MAX_R 2000
#define OFFSET 1000

using namespace std;

int x1[MAX_N], y1[MAX_N];
int x2[MAX_N], y2[MAX_N];

int checked[MAX_R + 1][MAX_R + 1];

int main() {
    for(int i=0; i<3; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += OFFSET;
        y1[i] += OFFSET;
        x2[i] += OFFSET;
        y2[i] += OFFSET;
    }

    for(int i=0; i<3; i++) {
        for(int x=x1[i]; x<x2[i]; x++) {
            for(int y=y1[i]; y<y2[i]; y++)
                checked[x][y]++;
        }
    }

    int ans = 0;
    for(int i=0; i<2; i++) {
        for(int x=x1[i]; x<x2[i]; x++) {
            for(int y=y1[i]; y<y2[i]; y++) {
                if(checked[x][y] == 1)
                    ans++;
            }
        }
    }
    
    cout<<ans;
}