#include <iostream>
using namespace std;

int main() {
    int n;  cin>>n;

    int binary[8];
    int cnt = 10000000;
    for(int i=0; i<8; i++) {
        binary[i] = n/cnt;
        n %= cnt;
        cnt /= 10;
    }

    // for(int i=0; i<8; i++)
    //     cout<<binary[i];
    
    // cout<<endl<<endl;

    int num = 0;
    for(int i = 0; i < 8; i++)
        num = num * 2 + binary[i];
    
    cout << num;
}