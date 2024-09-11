#include <iostream>

#define MAX_X 101
using namespace std;

int arr[MAX_X];

void Check(int x1, int x2) {
    for(int i=x1; i<=x2; i++)
        arr[i]++;
}

int main() {
    int n;  cin >> n;

    for(int i=0; i<n; i++) {
        int x1, x2;
        cin >> x1 >> x2;

        Check(x1, x2);
    }

    int max = arr[1];
    for(int i=2; i<102; i++) {
        if(max < arr[i])
            max = arr[i];
    }

    cout<<max;
}