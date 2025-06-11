
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
char a[5005][5005];
int dp[5005][5005];
const int mod = 1e9 + 7;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	if (a[1][1] == '.') dp[1][1] = 1;
	else dp[1][1] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 && j == 1) continue;
			if (a[i][j] == '.') {
				dp[i][j] += dp[i - 1][j];
				dp[i][j] += dp[i][j - 1];
			}
			dp[i][j] %= mod;
		}
	}
	cout << dp[n][n] % mod;
}

