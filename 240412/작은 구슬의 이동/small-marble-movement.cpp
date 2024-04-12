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
	

		if (dir == 0 || dir == 1) {// c값 변환
			c += dx[dir];

			if (c == 1 || c == n) {
				i++;
				//cout << "i값이 +1됨" << endl;
				if (dir == 0) { dir++;}
				else if (dir == 1) { dir--;}
				
				continue;
			}

			
			//cout << "c값: " << c << endl;
		}
		else if (dir == 2 || dir == 3) {// r값 변환
			r += dy[dir];

			if (r == 1 || r == n) {
				i++;
				//cout << "i값이 +1됨" << endl;
				if (dir == 2) { dir++;}
				else if (dir == 3) { dir--;}

				continue;
			}

			
			//cout << "r값: " << r << endl;
		}
	}
	cout << r << " " << c;
}