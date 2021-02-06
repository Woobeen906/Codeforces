#include <iostream>
#include <string>
using namespace std;

int main() {
	string first, second;
	cin >> first >> second;
	const char  *a = first.c_str(); 
	const char* b = second.c_str();
	
	int com=_stricmp(a, b);
	if (com == 0)cout << 0;
	else if (com < 0)cout << -1;
	else if (com > 0)cout << 1;
}