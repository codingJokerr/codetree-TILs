#include <iostream>
using namespace std;

#define DIR_NUM 4
int x, y;

// 동서남북 순으로
int dx[DIR_NUM] = { 1, -1, 0, 0 };
int dy[DIR_NUM] = { 0, 0, -1, 1 };

int main() {
	// 입력받기
	int n; cin >> n;

	int arr[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = 0;
		}
	}

	for (int i = 1; i < n+1; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	int N = 0;	// 조건을 만족하는 칸의 수
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			// 동서남북을 돌아보며
			// 1이 3개 이상이면
			// N++

			int n1 = 0;	// 1의 개수
			int a, b;
			for (int k = 0; k < 4; k++) {
				// x와 y 의 기준이 i와 j가 된다.
				a = i + dx[k];
				b = j + dy[k];
				// 동서남북 순회

				if (arr[a][b] == 1) {
					n1++;
				}
				
			}
			if (n1 >= 3) {
				N++;
			}
		}
	}

	cout << N;
}