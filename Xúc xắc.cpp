
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
const int mod = 1e9 + 7;
long long dp[5000005];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= 6; i++) {
		dp[i] = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 6; j++) {
			if (i >= j)dp[i] = (dp[i] + dp[i - j]) % mod;
		}
	}
	cout << dp[n];
}

