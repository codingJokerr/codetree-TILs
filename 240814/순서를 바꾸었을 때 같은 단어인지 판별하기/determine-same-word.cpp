#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool IsSame(string a, string b) {
    for(int i=0; i<a.length(); i++)
        if(a[i]!=b[i])
            return false;

        return true;
}

int main() {
    string a,b; cin>>a>>b;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(IsSame(a, b)) cout<<"Yes";
    else cout<<"No";
}