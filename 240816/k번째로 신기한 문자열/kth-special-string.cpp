#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 100

string word[MAX_N];
string ans[MAX_N];
int n, k;
string T;

string Judge(string a) {
    for(int i=0; i<T.size(); i++) {
        if(T[i]!=a[i]) {
            return "X";
        }
    }
    return a;
}

void Reorder() {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(word[i] != "X")
                ans[j] = word[i];
        }
    }
}

int main() {
    cin>>n>>k>>T;

    string a;
    for(int i=0; i<n; i++) {
        cin>>a;
        word[i] = Judge(a);
    }

    for(int i=0; i<n; i++)
        cout<<word[i]<<endl;

    cout<<"*********************\n";

    sort(word, word+n);

    for(int i=0; i<n; i++)
        cout<<word[i]<<endl;

    cout<<"*********************\n";

    for(int i=0; i<n; i++)
        cout<<ans[i]<<endl;

    cout<<ans[k-1];
}