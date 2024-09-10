#include <iostream>

#define MAXN 100
#define OFFSET 100

using namespace std;

int arr[MAXN];

void Plus(int x1, int x2) {
    for(int i=x1; i<x2; i++)
        arr[i]++;
}
int main() {
    int n;  cin>>n;

    for(int i=0; i<n; i++) {
        int x1, x2;
        cin >> x1 >> x2;
        x1 += 100;
        x2 += 100;

        Plus(x1, x2);
    }

    int max = arr[100];
    for(int i=101; i<=200; i++) {
        if(max < arr[i]) 
            max = arr[i];
    }

    cout<<max;
}