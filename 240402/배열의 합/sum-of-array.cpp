#include <iostream>
using namespace std;

int main() {
    int n;
    int sum[4] = { 0, 0, 0, 0 };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> n;
            sum[i] += n;
        }
    }

    for (int i = 0; i < 4; i++) {
        cout << sum[i] << endl;
    }
}