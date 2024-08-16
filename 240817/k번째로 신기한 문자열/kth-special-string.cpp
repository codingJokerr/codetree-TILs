#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 100

string word[MAX_N];
string ans[MAX_N];
int n, k;
string T;

int cnt;
string Judge(string a) {
    for(int i=0; i<T.size(); i++) {
        if(T[i]!=a[i]) {
            cnt++;
            return "X";
        }
    }
    return a;
}

int main() {
    cin>>n>>k>>T;

    // 단어 입력 && 조건 부합만 word에 저장
    string a;
    for(int i=0; i<n; i++) {
        cin>>a;
        string judge = Judge(a);
        if(judge == a )
            word[i-cnt] = judge;
    }
    
    sort(word, word+n-cnt);

    cout<<word[k-1];
}