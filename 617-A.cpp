#include <iostream>
using namespace std;

int main() {
	int x, cnt = 0;
	cin >> x;
	for (int i = 5; i > 0; i--) {
		if (x == 0)break;
		cnt += x / i;
		x = x % i;
	}
	cout << cnt;
}