
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
int dp[5005][5005];
int main()
{
	string s, t; cin >> s >> t;
	int n = s.size(), m = t.size();
	s = " " + s;
	t = " " + t;
	for (int i = 1; i <= m; i++) {
		dp[0][i] = i;
	}
	for (int i = 1; i <= n; i++) {
		dp[i][0] = i;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (s[i] == t[j]) {
				dp[i][j] = dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = min({ dp[i - 1][j],dp[i][j - 1],
					dp[i - 1][j - 1]}) + 1;
			}
		}
	}
	cout << dp[n][m];
}

