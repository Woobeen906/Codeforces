#include <iostream>
using namespace std;

int main() {
	int coorx, coory, coorz,x=0,y=0,z=0,n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> coorx >> coory >> coorz;
		x += coorx;
		y += coory;
		z += coorz;
	}

	if (x == 0 && y == 0 && z == 0)cout << "YES";
	else cout << "NO";

}