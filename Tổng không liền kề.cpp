
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
int a[10005];
int dp[10005];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	dp[0] = a[0];
	dp[1] = max(a[0], a[1]);
	for (int i = 2; i <= n; i++) {
		dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
	}
	cout << dp[n];
}

