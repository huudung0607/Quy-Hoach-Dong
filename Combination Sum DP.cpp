
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
long long dp[100005];
long long a[100005];
int main()
{
	int n, s; cin >> n >> s;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	dp[0] = 1;
	for (int i = 1; i <= s; i++) {
		for (int j = 1; j <= n; j++) {
			if (i >= a[j]) {
				dp[i] += dp[i - a[j]] % mod;
				dp[i] %= mod;
			}
		}
	}
	cout << dp[s];
}

