#include <iostream>
#include <string>
using namespace std;

int main() {
	int n,result = 0;
	string operation;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> operation;
		if (operation[1] == '+')result++;
		else if (operation[1] == '-')result--;
	}
	cout << result;
}