#include <iostream>
using namespace std;

int main() {
	long long n; //체스판 크기
	long long x, y;//코인의 위치 좌표

	cin >> n;
	cin >> x >> y;

	long long white=2, black=n+n;

	if (x + y -2> black - (x + y)) {
		cout << "Black";
	}
	else cout << "White";
}