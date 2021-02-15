#include <iostream>
#include <string>
using namespace std;

int letters[26];
//97
int main() {
	string name;
	cin >> name;
	for (int i = 0; i < name.length(); i++) {
		letters[name[i] - 97]++;
	}
	int cnt = 0;
	for (int i = 0; i < 26; i++) {
		if (letters[i] != 0)cnt++;
	}
	if (cnt % 2 == 0)cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";
}