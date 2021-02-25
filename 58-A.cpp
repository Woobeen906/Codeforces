#include <iostream>
#include <string>
using namespace std;

int main() {
	string s,result="hello";
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == result[cnt]) {
			cnt++;
			if (cnt == 5)break;
		}
	}
	if (cnt == 5)cout << "YES";
	else cout << "NO";
}