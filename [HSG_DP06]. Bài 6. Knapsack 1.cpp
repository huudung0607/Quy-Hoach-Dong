
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
long long dp[5000005];
int main()
{
	int n, w;
	cin >> n >> w;
	vector<pair<long long, long long>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	for (int i = 0; i < n; i++) {
		for (int j = w; j >= v[i].first; j--) {
			dp[j] = max(dp[j], dp[j - v[i].first] + v[i].second);
		}
	}
	cout << dp[w];
}

