#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string word;
		cin >> word;
		if (word.length() < 10)cout << word << "\n";
		else {
			int cnt = 0;
			for (int j = 1; j < word.length()-1; j++) {
				cnt++;
			}
			if (cnt != 0)cout << word[0] << cnt << word[word.length() - 1] << "\n";
			else cout << word[0] << word[word.length() - 1] << "\n";
		}
	}
}