#include <iostream>
using namespace std;

int arr1[3][3];
int arr2[3][3];
int main() {
    int n=3;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cin>>arr1[i][j];
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cin>>arr2[i][j];
    }

    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++)
    //         cout<<arr1[i][j]<<" ";
    //     cout<<endl;
    // }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cout<<arr1[i][j] * arr2[i][j]<<" ";
        cout<<endl;
    }
}