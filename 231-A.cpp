#include <iostream>
using namespace std;

int main() {
	int n, writeSolutions=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int Petya, Vasya, Tonya,sureSolution=0;
		cin >> Petya >> Vasya >> Tonya;;
		sureSolution = Petya + Vasya + Tonya;
		if (sureSolution >= 2)writeSolutions++;
	}
	cout << writeSolutions;
}