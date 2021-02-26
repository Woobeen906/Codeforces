#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	int lower = 0, upper = 0;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 'a' && s[i] <= 'z')lower++;
		else upper++;
	}
	if (upper > lower)transform(s.begin(), s.end(), s.begin(), toupper);
	else transform(s.begin(), s.end(), s.begin(), tolower);
	cout << s;
}