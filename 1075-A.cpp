#include <iostream>
using namespace std;

int main() {
	long long n; //ü���� ũ��
	long long x, y;//������ ��ġ ��ǥ

	cin >> n;
	cin >> x >> y;

	long long white=2, black=n+n;

	if (x + y -2> black - (x + y)) {
		cout << "Black";
	}
	else cout << "White";
}