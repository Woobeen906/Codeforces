#include <iostream>
using namespace std;

int main() {
	int n, k,advancers=0,scores[101];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> scores[i];
	}
	for (int i = 0; i < n; i++) {
		if (scores[i] == 0)break;
		if (advancers == k) {
			for (int j = k; j < n; j++) {
				if (scores[i - 1] == scores[j])advancers++;
				else break;
			}
			break;
		}
		else if (scores[i] > 0)advancers++;
		
	}
	cout << advancers;
}