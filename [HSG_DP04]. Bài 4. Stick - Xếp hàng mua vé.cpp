
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

long long a[100005];
long long dp[100005];
long long t[100005], r[100005];
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t[i];
	}
	for (int i = 1; i < n; i++) {
		cin >> r[i];
	}
	dp[0] = 0;
	dp[1] = t[1];
	for (int i = 2; i <= n; i++) {
		dp[i] = min(dp[i - 1] + t[i], dp[i - 2] + r[i - 1]);
	}
	cout << dp[n];
}

