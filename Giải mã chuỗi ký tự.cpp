
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;
const int mod = 1e9 + 7;


int main()
{
	string s;
	cin >> s;
	if (s.empty() || s[0] == '0') {
		cout << 0; return 0;
	}
	vector<long long> F(s.size() + 1, 0);
	F[1] = 1;
	F[0] = 1;
	for (int i = 2; i <= s.size(); i++) {
		if (s[i - 1] != '0') {
			F[i] = F[i - 1];
			F[i] %= mod;
		}
		int tmp = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
		if (tmp >= 10 && tmp <= 26) {
			F[i] += F[i - 2];
			F[i] %= mod;
		}

	}
	cout << F[s.size()] % mod;
}

