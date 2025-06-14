
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
	int c, n;
	cin >> c >> n;
	vector<int> a(n);
	vector<int> dp(c + 1, 0);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	dp[0] = 1;
	for (auto x : a) {
		for (int i = c; i >= x; i--) {
			if (dp[i - x]) dp[i] = 1;
		}
	}
	for (int i = c; i >= 0; i--) {
		if (dp[i]) {
			cout << i;
			break;
		}
	}
}

