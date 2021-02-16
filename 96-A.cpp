#include <iostream>
#include <string>
using namespace std;

int main() {
	string player;
	cin >> player;
	int cnt = 1;
	char st = player[0];
	
	for (int i = 1; i < player.length(); i++) {
		if (st == player[i])cnt++;
		else {
			cnt = 1;
			st = player[i];
		}
		if (cnt == 7)break;
	}
	if (cnt == 7)cout << "YES";
	else cout << "NO";
}