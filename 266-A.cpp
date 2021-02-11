#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,cnt=0;
	string stones;
	cin >> n;
	cin >> stones;
	for (int i = 0; i < n-1; i++) {
		if (stones[i] == stones[i + 1])cnt++;
	}
	cout << cnt;
}