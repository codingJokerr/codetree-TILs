#include <iostream>
#include <algorithm>
using namespace std;

int Compare(int a, int b, int c) {
    int fmin = min(a, b);
    int real_min = min(fmin, c);
    return real_min;
}

int main() {
    int a, b, c; cin>>a>>b>>c;

    cout << Compare(a, b, c);
}