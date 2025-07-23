
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

int main()
{
	int n, k; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		dp[i] = 1e9;
	}
	dp[1] = 0;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= 2; j++) {
			if (i - j >= 1) {
				dp[i] = min(dp[i], dp[i - j] + abs(a[i] - a[i - j]));
			}
		}
	}
	cout << dp[n];
}

