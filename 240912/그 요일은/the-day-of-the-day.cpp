#include <iostream>
#include <string>

using namespace std;

int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int CalDays(int month, int day) {
    int sum = day;
    
    for(int i=1; i<month; i++) {// 1월부터 직전 달까지
        sum += days[i];
    }

	return sum;
}

int main() {
    int m1,d1,m2,d2;    string checkDay;
    cin>>m1>>d1>>m2>>d2>>checkDay;

    int day1 = CalDays(m1, d1);
    int day2 = CalDays(m2, d2);

	// day1이 항상 앞선다.
    int diff = day2 - day1;
	if(diff < 7) 
		cout << 0;
	else {
		string dayOfWeek[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
		int idx = 0;
		for(int i=0; i<7; i++) {// 요일 숫자로 저장하기
			if(checkDay == dayOfWeek[i])
				idx = i;
		}
    	// m1월 d1월은 월요일이다.
    	// diff + 해당 요일 처리... +) -7??
		diff -= idx;
    	int ans = (diff / 7) +1;	// 0인 경우가 없다.

		cout<<ans;
	}
}