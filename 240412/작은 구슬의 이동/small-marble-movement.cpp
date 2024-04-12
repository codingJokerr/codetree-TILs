#include <iostream>
using namespace std;

#define DIR_NUM 4

int dx[DIR_NUM] = { 1, -1, 0, 0 };
int dy[DIR_NUM] = { 0, 0, -1, 1 };


int main() {
	int n, t;
	int r, c;
	char d;
	cin >> n >> t >> r >> c >> d;

	// 방향 지정하기
	int dir;
	if (d == 'U')
		dir = 3;
	else if (d == 'D')
		dir = 2;
	else if (d == 'R')
		dir = 0;
	else
		dir = 1;

	while (t) {
		// 벽에 닿는 경우(1이거나 n인 경우) => 방향 뒤집기
		// U,D r가 3 2
		// R,L c가 0 1

		if (dir == 3 || dir == 2) {// 위 아래
			r += dy[dir];
			if (r == 1) {
				// 방향 반대로 바꾸기
				if (dir == 3) { dir--; }
				else { dir++; }
			}
			else if (r == n) {
				// 방향 반대로 바꾸기
				if (dir == 3) { dir--; }
				else { dir++; }
			}
			
		}

		if (dir == 1 || dir == 0) {// 오 왼
			c += dx[dir];
			if (c == 1) {
				// 방향 반대로 바꾸기
				if (dir == 1) { dir--; }
				else dir++;
			}
			if (c == n) {// 오 왼
				// 방향 반대로 바꾸기
				if (dir == 1) { dir--; }
				else dir++;
			}
			
		}

		cout << t << ": " << c << " " << t << endl;
	}
	cout << r << " " << c;
}