#include <iostream>
using namespace std;

int main() {
	// m1월 d1일 ~ m2월 d2일까지의 날짜 차 구한 후
	// %7의 값에 따라 요일 구하기
	int m1, m2, d1, d2;
	cin >> m1 >> d1 >> m2 >> d2;

	int month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int days1 = d1;
	for (int i = 1; i < m1; i++) {
		days1 += month[i];
	}

	int days2 = d2;
	for (int i = 1; i < m2; i++) {
		days2 += month[i];
	}

	int dif = days2 - days1;
	while(dif < 0) {
        dif += 7;
    }

	//cout << "*** dif " << dif;

	int ans = dif % 7;
	//cout << "\n*** ans " << ans << endl;

	switch (ans) {
	case 1:
		cout << "Tue";
		break;
	case 2:
		cout << "Wed";
		break;
	case 3:
		cout << "Thu";
		break;
	case 4:
		cout << "Fri";
		break;
	case 5:
		cout << "Sat";
		break;
	case 6:
		cout << "Sun";
		break;
	default:
		cout << "Mon";
	}
}