#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>
#include <string>

using namespace std;


int AP(int number);

int main() {
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
	while (true) {
		int a;
		cout << "숫자를 입력하십시요(99 = 종료) : ";
		cin >> a;
		cout << AP(a) << "\n";

		if (a == 99) {
			break;
		}

	}

	return 0;
}

int AP(int number) {
	int count = 99;
	if (number < 100) {
		return number;
	}
	else if (number >= 100 && number <= 110) {
		return count;
	}
	
	char cols[10];
	for (int i = 111; i <= number; i++) {
		sprintf(cols, "%d", i);
		int ap_num1 = cols[0] - cols[1];
		int ap_num2 = cols[1] - cols[2];
		if (ap_num1 == ap_num2) {
			count++;
		}
	}
	return count;


}