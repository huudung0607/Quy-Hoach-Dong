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
long long dp[1000001];
const int mod = 1e9 + 7;

int main()
{
	string s; cin >> s;
	int n = s.size();
	dp[0] = s[0] - '0';
	for (int i = 1; i < n; i++) {
		int num = s[i] - '0';
		dp[i] = (dp[i - 1] * 10 + (long long)(i + 1) * num);
		dp[i] %= mod;
	}
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += dp[i];
		sum %= mod;
	}
	cout << sum;
}
