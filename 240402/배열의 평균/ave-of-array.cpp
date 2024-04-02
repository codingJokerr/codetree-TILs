#include <iostream>
using namespace std;

int main() {
    cout << fixed;
    cout.precision(1);

    int arr[2][4];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }


    // 가로줄 평균
    for (int i = 0; i < 2; i++) {
        int row_avg = 0;
        for (int j = 0; j < 4; j++) {
            row_avg += arr[i][j];
        }
        cout << row_avg / 4.0 << " ";
    }
    cout << endl;

    // 세로줄 평균
    for (int i = 0; i < 4; i++) {
        int col_avg = 0;
        for (int j = 0; j < 2; j++) {
            col_avg += arr[j][i];
        }
        cout << col_avg / 2.0 << " ";
    }
    cout << endl;

    // 전체 평균
    int avg = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            avg += arr[i][j];
        }
    }
    cout << avg / 8.0;
}