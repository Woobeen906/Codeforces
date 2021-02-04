#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string word;
	cin >> word;
	for (unsigned int i = 0; i < word.length(); i++) {
		if (word[i] == 'A' || word[i] == 'a' ||
			word[i] == 'O' || word[i] == 'o' ||
			word[i] == 'Y' || word[i] == 'y' ||
			word[i] == 'E' || word[i] == 'e' ||
			word[i] == 'U' || word[i] == 'u' ||
			word[i] == 'I' || word[i] == 'i'
			) {
			word[i] = ' ';
		}
		else if ((int)word[i] > 64 && (int)word[i] < 91) {
			int  temp = (int)word[i];
			temp += 32;
			word[i] = (char)temp;
		}
	}
	word.erase(remove(word.begin(), word.end(), ' '), word.end());


	for (unsigned int i = 0; i < word.length() * 2; i++) {
		if (i % 2 == 0)cout << '.';
		else {
			cout<<word[(i-1)/2];
		}
	}
}