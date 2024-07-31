#include <iostream>
using namespace std;

// bool IsTrue(int A, int B) {
//     for(int i=0; i<)
// }

bool Judge(int A[], int n1, int B[], int n2) {
    for(int i=0; i<n1; i++) {
        if(A[i]==B[0] && A[i+1]==B[1]) {
            return true;
        }
    }
    return false;
}

int main() {
    int n1, n2; cin>>n1>>n2;
    int A[100], B[100];
    
    for(int i=0; i<n1; i++) {
        cin>>A[i];
    }
    for(int i=0; i<n2; i++) {
        cin>>B[i];
    }

    if(Judge(A, n1, B, n2)) cout<<"Yes";
    else cout<<"No";

    
}