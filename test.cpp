
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
int a[505][505];
int dp[505][505];
int main()
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j<= m; j++) {
			cin >> a[i][j];
		}
	}
	int maxval = -1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i][j] == 1) {
				dp[i][j] = min({ dp[i][j - 1],dp[i - 1][j - 1],dp[i - 1][j] }) + a[i][j];
			}
			maxval = max(maxval, dp[i][j]);
		}
		
	}
	cout << maxval * maxval;
}

