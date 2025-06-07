
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
long long dp[1000006];
void Tribonacci() {
	dp[0] = 0, dp[1] = 0, dp[2] = 1;
	for (int i = 3; i <= 1000000; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
		dp[i] %= mod;
	}
}
int main()
{
	Tribonacci();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
}

