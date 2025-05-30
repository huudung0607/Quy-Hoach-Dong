
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
int a[500005][4];
long long dp[500005][4];
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i][1] >> a[i][2] >> a[i][3];
	}
	dp[1][1] = a[1][1];
	dp[1][2] = a[1][2];
	dp[1][3] = a[1][3];
	for (int i = 2; i <= n; i++) {
		dp[i][1] = max(dp[i - 1][2], dp[i - 1][3]) + a[i][1];
		dp[i][2] = max(dp[i - 1][1], dp[i - 1][3]) + a[i][2];
		dp[i][3] = max(dp[i - 1][1], dp[i - 1][2]) + a[i][3];
	}
	long long maxval = -1;
	for (int i = 1; i <= n; i++) {
		maxval = max(dp[n][i], maxval);
	}
	cout << maxval;
}

