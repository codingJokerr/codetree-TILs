#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define MAX_N 100
string word[MAX_N];

int main() {
    int n;  cin>>n;

    for(int i=0; i<n; i++)
        cin>>word[i];
    
    sort(word, word+n);

    for(int i=0; i<n; i++)
        cout<<word[i]<<endl;
}