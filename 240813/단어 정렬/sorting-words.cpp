#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define MAX_N 100
string str[MAX_N];

int main() {
    int n;  cin>>n;

    for(int i=0; i<n; i++)
        cin>>str[i];
    
    sort(str, str+n);

    for(int i=0; i<n; i++)
        cout<<str[i]<<endl;
}