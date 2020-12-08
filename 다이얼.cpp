#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	string number;
	int num= 0;
	cin >> number;

	for (int i = 0; i < number.length(); i++) {
		if (number[i] == 0) { 
			num += 10;
		}
		else if (number[i] == 1) {   
			num += 1;
		}
		if (number[i] >= 'S') {
			number[i] -= 1;
			
		}

		if(number[i] == 'Y') {
			number[i] -= 1;
		}
		cout << ((number[i] - 'A') / 3)+2 << endl;
		num += ((number[i] - 'A') / 3) + 3;
		
	}

	cout << num;
	return 0;
}