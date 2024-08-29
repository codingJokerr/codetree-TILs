#include <iostream>
using namespace std;

int main() {
	int m1, d1, m2, d2;
	cin >> m1 >> d1 >> m2 >> d2;
//                           1   2   3   4   5   6   7   8   9   10  11  12(월)
	int numOfDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int elDay1=0;
    for(int i=1; i<m1; i++) {
        elDay1 += numOfDays[i];
    }
    elDay1 += d1;

    int elDay2=0;
    for(int i=1; i<m2; i++) {
        elDay2 += numOfDays[i];
    }
    elDay2 += d2;

    cout<<elDay2-elDay1+1;
}