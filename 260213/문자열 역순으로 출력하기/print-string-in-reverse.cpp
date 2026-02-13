#include <iostream>
using namespace std;

string arr[4];

int main() {
    for(int i=0; i<4; i++) {
        cin>>arr[i];
    }

    for(int i=3; i>=0; i--) {
        cout<<arr[i]<<endl;
    }
}