
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
int dp[5005];
const int mod = 1e9 + 7;
int main()
{
	int n, k;
	cin >> n >> k;
  //dp[0] = 1 tại bậc 0 thì bước 1 bậc, kiểu đứng yên tại chỗ a.
	dp[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if(i >= j)dp[i] += dp[i - j];
			dp[i] %= mod;
		}
	}
	cout << dp[n] % mod;
}

