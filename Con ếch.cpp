
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
int dp[5005];
int main()
{
	int n; cin >> n;
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
	}
	cout << dp[n];
}

