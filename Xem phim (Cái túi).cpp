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
int a[10006];
int dp[505][25005];
int main()
{
	int c, n;
	cin >> c >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= c; j++) {
			dp[i][j] = dp[i - 1][j];
			if (j >= a[i]) {
				dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i]] + a[i]);
			}
		}
	}
	cout << dp[n][c];
}
