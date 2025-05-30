
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
long long dp[5005];
const int mod = 1e9 + 7;
void Catalan() {
	dp[0] = 1;
	dp[1] = 1;
	for (int i = 2; i <= 1001; i++) {
		for (int j = 0; j < i; j++) {
			dp[i] += (dp[j] * dp[i - j - 1])% mod;
			dp[i] %= mod;
		}
	}
}
int main()
{
	Catalan();
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << dp[n] % mod << endl;
	}
}

