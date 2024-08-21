#include <iostream>
#include <string>

using namespace std;

#define MAX_N 100

class RainyDay {
public:
	string day;
	string year_month_day;
	string weather;

	RainyDay(string day, string year_month_day, string weather) {
		this->day = day;
		this->year_month_day = year_month_day;
		this->weather = weather;
	}
	RainyDay() {}
};

RainyDay RainyDays[MAX_N];
int main() {
	int n;  cin >> n;

	string day, year_month_day, weather;
    int idx;
	for (int i = 0; i < n; i++) {
		cin >> day >> year_month_day >> weather;
        if(weather == "Rain") idx = i;
		RainyDays[i] = RainyDay(day, year_month_day, weather);
	}

	for (int i = 0; i < n; i++) {
		if (RainyDays[i].weather == "Rain") {
			if (RainyDays[idx].day > RainyDays[i].day)
				idx = i;
		}
	}

	cout << RainyDays[idx].day << " " << RainyDays[idx].year_month_day << " " << RainyDays[idx].weather;
}