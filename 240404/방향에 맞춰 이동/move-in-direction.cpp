#include <iostream>
using namespace std;

int main() {
	int N; cin >> N;
	int x{ 0 }, y{ 0 };

	while (N--) {
		char a;
		int n;
		cin >> a >> n;


		while (n--) {
			if (a == 'W') {// 서: x-1
				x = x - 1;
			}
			else if (a == 'S') {// 남: y-1
				y = y - 1;
			}
			else if (a == 'N') {// 북: y+1
				y = y + 1;
			}
			else {// 동: x+1
				x = x + 1;
			}
		}
	}

	cout << x << " " << y;
}