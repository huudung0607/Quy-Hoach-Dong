
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
int dp[105][100005];
int a[105];
const int mod = 1e9 + 7;
int main()
{
	int n, k; cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i <= a[0]; i++) {
		dp[0][i] = 1;
	}
	for (int i = 1; i < n; i++) {
		vector<int> prefixsum(k + 1);
		prefixsum[0] = dp[i - 1][0];
		for (int j = 1; j < k + 1; j++) {
			prefixsum[j] = (prefixsum[j - 1] + dp[i - 1][j]) % mod;
		}
		for (int j = 0; j < k + 1; j++) {
			if (j > a[i]) dp[i][j] = (prefixsum[j] + mod - prefixsum[j - a[i] - 1]) % mod;
			else dp[i][j] = prefixsum[j];
		}
	}
	cout << dp[n - 1][k];
}

