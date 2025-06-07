
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
void giaithua() {
	dp[0] = 1;
	for (int i = 1; i <= 1000000; i++) {
		dp[i] = dp[i - 1] * i;
		dp[i] %= mod;
	}
}
int main()
{
	giaithua();
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
}

