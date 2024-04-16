#include <iostream>
using namespace std;

#define DIR_NUM 4

// 동서남북 == RLDU
int dx[DIR_NUM] = { 1, -1, 0, 0 };
int dy[DIR_NUM] = { 0, 0, -1, 1 };

int n, t;
int r, c;
char d;
int dir = 0;

int main() {
	cin >> n >> t >> r >> c >> d;

	// dir값 지정
	if (d == 'R') dir = 0;
	else if (d == 'L') dir = 1;
	else if (d == 'D') dir = 2;
	else if (d == 'U') dir = 3;

	for (int i = 0; i < t; i++) {// t만큼 반복한다.
		if (dir == 0 || dir == 1) {

			if (c < 1 || c > n) {
				if (dir == 0) {
					dir++;
					cout << "dir +" << endl;
					if (i == t - 1) {
						i++;
					}
					else {
						i++;
						c += dx[dir];
					}
				}
				else {
					dir--;
					cout << "dir -" << endl;
					if (i == t - 1) {
						break;
					}
					else {
						i++;
						c += dx[dir];
					}
				}
			}
			else {
				c += dx[dir];
				cout << "c값: " << c << endl;
			}
			
		}
		else {

			if (r == 1 || r == n) {
				if (dir == 2) {
					dir++;
					cout << "dir +" << endl;
				}
				else {
					dir--;
					cout << "dir -" << endl;
				}
			}
			else {
				r += dy[dir];
			}
		}
	}
	cout << r << " " << c;
}