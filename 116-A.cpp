#include <iostream>
using namespace std;

int main() {
	int n, a, b,max=0,people=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		people -= a;
		people += b;
		if (people > max)max = people;
	}
	cout << max;
}