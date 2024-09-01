#include <iostream>
using namespace std;

// bool Early(int day, int hour, int minute) {
//     if (day < 11)
//         return false;
//     else if (day == 11) {
//         if (hour < 11)
//             return false;
//         else if (hour == 11) {
//             if (minute < 11)
//                 return false;
//             else
//                 return true;
//         }
//         return true;
//     }
//     return true;
// }

int main() {
	int day, hour, minute;
	cin >> day >> hour >> minute;

	int sum = 0;
	// if (Early(day, hour, minute) == false) {
	//     cout << -1;
	// }
	// else {// true가 반환된 경우
	if (minute > 11)   // minute에 대한 처리
		sum += minute - 11;
	else {
		sum += minute - 11 + 60;
		hour--;
	}

	if (hour > 11)   // hour에 대한 처리
		sum += (hour - 11) * 60;
	else {
		sum += (hour - 11 + 24) * 60;
		day--;
	}

	sum += (day - 11) * 1440;
	//}

	if (sum >= 0) cout << sum;
	else cout << -1;
	//cout << sum;
}