#include <iostream>

#define MAX_N 50

using namespace std;

int arr[MAX_N];
int n=0;

void AbsoluteValue() {
    for(int i=0; i<n; i++) {
        if(arr[i]<0) 
            arr[i]=-arr[i];
    }
}

int main() {
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    AbsoluteValue();

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
}