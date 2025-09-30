
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
//knapsack
long long dp[500005];
int main()
{
	int n, s;
	cin >> n >> s;
	vector<pair<int, int>> v(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = s; j >= v[i].first; j--) {
			dp[j] = max(dp[j], dp[j - v[i].first] + v[i].second);
		}
	}
	cout << dp[s];
}

