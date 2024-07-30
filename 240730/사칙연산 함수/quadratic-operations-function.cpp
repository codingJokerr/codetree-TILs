#include <iostream>
#include <string>

using namespace std;

int Calculate(int a, char o, int c) {
	if (o == '+') return a + c;
	if (o == '-') return a - c;
	if (o == '*') return a * c;
	if (o == '/') return a / c;

	return -100;
}

int main() {
	int a, c; char o;
	cin >> a >> o >> c;

	int ans = Calculate(a, o, c);
	if (ans == -100) cout << "False";
	else cout << a << " " << o << " " << c << " = " << ans;
}