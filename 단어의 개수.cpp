#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>
#include <string>

#define STRMAX 1000001

using namespace std;


int main() {
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	char str[STRMAX];
	int count = 0;
	char* token;

	cin.getline(str, STRMAX);
		
	token = strtok(str, " ");

	while (token != NULL) {
		count++;
		token = strtok(NULL, " ");
	}
	
	cout << count << endl;

	return 0;
}

