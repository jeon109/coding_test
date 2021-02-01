#pragma warning(disable : 4996)
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
	ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);

	int n, check = 0;
	int family[26] = { 0, };
	cin >> n;
	
	for (int i = 0; i < n; i++) 
	{ 
		char name[31]; 
		cin >> name;
		family[(int)(name[0] - 97)]++; 
	} 

	for (int i = 0; i < 26; i++)
		if (family[i] >= 5) check++, cout << (char)(i + 97); 
	
	if (!check) 
		cout << "PREDAJA";




	return 0;
} 

