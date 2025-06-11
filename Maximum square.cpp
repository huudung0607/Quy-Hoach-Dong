
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
int a[5005][5005];
int dp[5005][5005];
const int mod = 1e9 + 7;
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= m; i++) {
		dp[1][i] = a[1][i];
	}
	int maxval = 0;
	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == 1) {
				dp[i][j] = min({ dp[i - 1][j],dp[i - 1][j - 1], dp[i][j - 1]}) + a[i][j];
			}
			maxval = max(maxval, dp[i][j]);
		}
	}
	cout << maxval;
}

