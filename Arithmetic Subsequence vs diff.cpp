
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
int main()
{
	int n, d;
	cin >> n >> d;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	unordered_map<int, int> dp;
	int maxlen = 1;
	for (int i = 0; i < n; i++){
		if (dp.count(a[i] - d)) {
			dp[a[i]] = dp[a[i] - d] + 1;
		}
		else dp[a[i]] = 1;
		maxlen = max(dp[a[i]], maxlen);
	}
	cout << maxlen;
}

