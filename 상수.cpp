#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

#define STRMAX 1000001

using namespace std;


int main() {
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int a,b;
	cin >> a >> b;

	string s = to_string(a);
	reverse(s.begin(), s.end());
	a = atoi(s.c_str());

	s = to_string(b);
	reverse(s.begin(), s.end());
	b = atoi(s.c_str());
	
	if (a < b)cout << b;
	else cout << a;

	return 0;
}

