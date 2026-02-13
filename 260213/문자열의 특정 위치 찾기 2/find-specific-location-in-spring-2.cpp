#include <iostream>
using namespace std;

string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
char a;

int main() {
    cin>>a;

    int cnt = 0;
    for(int i=0; i<5; i++) {
        for(int j=2; j<=3; j++) {// 세 번째나 네 번째
            if(arr[i][j] == a) {
                cnt++;
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
    cout<<cnt;
}