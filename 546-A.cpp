#include <iostream>
using namespace std;

int main() {
	int k, n, w;
	cin >> k >> n >> w;
	int sum = 0,temp=0;
	for (int i = 1; i <= w; i++) {
		temp += k * i;
	}
	sum = n - temp;
	if (sum < 0)cout << sum * -1;
	else cout << 0;
}