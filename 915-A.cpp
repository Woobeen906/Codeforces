#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, k, a[101];
	cin >> n >> k;
	for (int i = 0; i < n; i++)cin >> a[i];
	sort(a, a + n);
	for (int i = n - 1; i >= 0; i--) {
		if (k % a[i] == 0) {
			cout << k / a[i];
			break;
		}
	}
}