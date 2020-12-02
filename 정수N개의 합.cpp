#include <iostream>
#include <vector>

using namespace std;

long long sum(std::vector<int> &a) {
	long long ans = 0;
	for (int i = 0; i < a.size(); i++) {
		ans += a[i];
	}

	/*
	while(a.size() > 0) {
		ans += a.back();
		a.pop_back();
	}

	 for(vector<int>::iterator iter = a.begin(); iter < a.end(); iter++)
		ans += *iter;

	*/
	return ans;
}