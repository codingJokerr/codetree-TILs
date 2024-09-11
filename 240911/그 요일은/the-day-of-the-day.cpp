#include <iostream>
#include <string>

using namespace std;

int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int CalDays(int month, int day) {
    int sum = day;
    
    for(int i=1; i<=month; i++) {// 1월부터 직전 달까지
        sum += days[i];
    }

	return sum;
}

int main() {
    int m1,d1,m2,d2;    string checkDay;
    cin>>m1>>d1>>m2>>d2>>checkDay;

    int day1 = CalDays(m1, d1);
    int day2 = CalDays(m2, d2);

	string dayOfWeek[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
	int idx = 0;
	for(int i=0; i<7; i++) {
		if(checkDay == dayOfWeek[i])
			idx = i;
	}
	day1 += idx;

    // day1이 항상 앞선다.
    int dif = day2 - day1;

    // m1월 d1월은 월요일이다.
    // dif + 해당 요일 처리... +) -7??
    int ans = dif / 7 +1;

	cout<<ans;
}