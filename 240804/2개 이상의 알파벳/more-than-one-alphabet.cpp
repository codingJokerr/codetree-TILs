#include <iostream>
#include <string>

using namespace std;

int Judge(string &str) {
    int cnt=0;
    for(int i=0; i<str.length(); i++) {
        for(int j=1; j<str.length(); j++) {
            if(str[i]!=str[j])
                cnt++;
        }
    }
    return cnt;
}

int main() {
    string str; cin>>str;
   
    if(Judge(str)>=2)
        cout<<"Yes";
    else
        cout<<"No";
}