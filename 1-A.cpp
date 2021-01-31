#include <iostream>
using namespace std;

int main() {
	long long n, m, a;
	cin >> n >> m >> a;
	long long resultn, resultm;
	if (n % a > 0)resultn = n / a + 1;
	else resultn = n / a;
	if (m % a > 0)resultm = m / a + 1;
	else resultm = m / a;

	cout << resultm + resultn;
}