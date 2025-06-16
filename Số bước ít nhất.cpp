
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
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int maxlen = -1;
	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = 1; j <= i; j++) {
			if (a[i] > a[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		maxlen = max(maxlen, dp[i]);
	}
	cout << n - maxlen;
}

