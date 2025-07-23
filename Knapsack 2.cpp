
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
long long dp[5000005];
int main()
{
	int n, w;
	cin >> n >> w;
	vector<pair<long long, long long>> v(n);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
		sum += v[i].second;
	}
	for (int i = 1; i <= sum; i++) {
		dp[i] = 1e18;
	}
	dp[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = sum; j >= v[i].second; j--) {
			dp[j] = min(dp[j], dp[j - v[i].second] + v[i].first);
		}
	}
	int ans = 0;
	for (int i = 0; i <= sum; i++) {
		if (dp[i] <= w) {
			ans = max(ans, i);
		}
	}
	cout << ans;
}

