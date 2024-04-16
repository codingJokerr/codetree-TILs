#include <iostream>
using namespace std;

#define DIR_NUM 4

// 동서남북 == RLDU
int dx[DIR_NUM] = { 1, -1, 0, 0 };
int dy[DIR_NUM] = { 0, 0, -1, 1 };

int n, t;
int r, c;
char d;
int dir;

int main() {
	cin >> n >> t >> r >> c >> d;

	// dir값 지정
	if (d == 'R') dir = 0;
	else if (d == 'L') dir = 1;
	else if (d == 'D') dir = 2;
	else if (d == 'U') dir = 3;

	for (int i = 0; i < t; i++) {// t만큼 반복한다.
		// 0과 n+1을 이용해볼까?

		// 1 0 1 2 3 이 정답이자나
		if (dir == 0 || dir == 1) {// 오 왼으로
			c += dx[dir];
			//cout << "c값: " << c << endl;

			if (c == 0 || c == n+1) {// 범위를 벗어난 경우
				if (dir == 0) {// R방향
					dir++;
					c = n;
				}
				else {
					dir--;
					c = 1;
				}
			}
		}
		else {// dir == 1 || dir == 2
			r += dy[dir];

			if (r == 0 || r == n+1) {
				if (dir == 2) {// D방향
					dir++;
					r = n;
				}
				else {
					dir--;
					d = 1;
				}
			}
		}
	}
	cout << r << " " << c;
}