#include <iostream>
using namespace std;

#define MAX_N 100
int A[MAX_N];
int n,m;
int sum;

int Changing_m() {
	sum += A[m];
	while (m >= 1) {
		if (m % 2 == 1) {// 홀수인 경우
			m--;
			sum += A[m];
		}
		else {// 짝수인 경우
			m /= 2;
			sum += A[m];
		}
	}
	return sum;
}

int main() {
	cin >> n >> m;

	for (int i = 1; i < n+1; i++) {
		cin >> A[i];
	}

	cout << Changing_m();
}