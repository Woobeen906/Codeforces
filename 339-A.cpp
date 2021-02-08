#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	vector <char> sum;
	string s;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != '+')sum.push_back(s[i]);
	}
	sort(sum.begin(), sum.end());
	
	for (int i = 0; i < sum.size(); i++) {
		cout << sum[i];
		if (i != (sum.size() - 1))cout << "+";
	}
}