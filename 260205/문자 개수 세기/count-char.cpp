#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    char a;
    cin>>a;
    
    int cnt=0;
    for(int i=0; i<100; i++) {
        if(str[i] == a) cnt++;
    }

    cout<<cnt;
}