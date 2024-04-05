#include <iostream>
using namespace std;

#define DIR_NUM 4
#define LR_NUM 4

int x, y;
int direct;

int lr[LR_NUM] = { 3, 1, 2, 0 };
// L: 3 0 1 2
// R : 3 2 1 0

int dx[DIR_NUM] = { 1, -1, 0, 0 };
int dy[DIR_NUM] = { 0, 0, -1, 1 };

int main() {
	// 북쪽을 향한 상태로 시작
	// 명령어 : L(왼쪽으로 회전), R(오른쪽으로 회전), F(앞으로)

	// 방향 입력받기
	char c_direct;
	cin >> c_direct;
	do {
		int dir;
		// 방향 지정하기
		//	3 1 2 0 반복해야해
		if (c_direct == 'L') {
			direct += 1;	// 3 1 2 0 반복
			if (direct == 4) direct = 0;

			/*dir = lr[direct];
			cout << "***L  " << dir << endl;*/
		}
		else if (c_direct == 'R') {
			direct -= 1;	// 3 0 2 1 반복
			if (direct == -1) direct = 3;

			/*dir = lr[direct];
			cout << "***R  " << dir << endl;*/
		}
		else {// c_direct == 'F'
			// 이동하기
			dir = lr[direct];
			//cout << "***F  " << dir << endl;
			//cout << dir;

			x += dx[dir];
			y += dy[dir];

			//cout << x << " " << y;
		}
	} while (cin >> c_direct);

	cout << x << " " << y;
}