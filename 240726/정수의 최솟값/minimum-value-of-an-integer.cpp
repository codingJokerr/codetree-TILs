#include <iostream>
// #include <algorithm>

using namespace std;

int Min(int a, int b, int c) {
    int min_val=a;
    if(min_val >b)
        min_val = b;
    if(min_val >c)
        min_val = c;

    return min_val;
}

// int Compare(int a, int b, int c) {
//     int fmin = min(a, b);
//     int real_min = min(fmin, c);
//     return real_min;
// }

int main() {
    int a, b, c; cin>>a>>b>>c;

    cout << Min(a, b, c);
}