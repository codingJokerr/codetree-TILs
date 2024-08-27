#include <iostream>
#include <algorithm>

#define MAXN 1000

using namespace std;

class Number {
public:
    int num;
    int index;

    Number(int num, int index) : num(num), index(index) {}

    Number(){}
};

bool Cmp(const Number &a, const Number &b) {
    return a.num < b.num;
}

Number numbers[MAXN];
int main() {
    int n;  cin>>n;

    for(int i=0; i<n; i++) {
        int num; cin>>num;
        numbers[i] = Number(num, i);
    }

    sort(numbers, numbers+n, Cmp);

    int ans[MAXN+1];
    for(int i=0; i<n; i++) {
        ans[numbers[i].index] = (i+1);
    }

    for(int i=0; i<n; i++) {
        cout<<ans[i]<<" ";
    }
}