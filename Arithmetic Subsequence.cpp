
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

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int maxlen = 1;
	vector<unordered_map<int, int>> dp(n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			int dif = a[i] - a[j];
			dp[i][dif] = dp[j].count(dif) ? dp[j][dif] + 1 : 2;
			maxlen = max(maxlen, dp[i][dif]);
		}
	}
	cout << maxlen;
}

