
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
int a[50005];
long long F[50005];
long long dp[50005];
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	long long maxval = -1;
	for (int i = 1; i <= n; i++) {
		F[i] = 1;
		dp[i] = 1;
		for (int j = 1; j <= i; j++) {
			if (a[i] > a[j]) {
				if (F[i] < F[j] + 1) {
					F[i] = max(F[i], F[j] + 1);
					dp[i] = dp[j];
				}
				else if (F[i] == F[j] + 1) {
					dp[i] += dp[j];
				}
			}
		}
	}
	long long cnt = 0;
	for (int i = 1; i <= n; i++) {
		maxval = max(maxval, F[i]);
	}
	for (int i = 1; i <= n; i++) {
		if (maxval == F[i]) {
			cnt += dp[i];
		}
	}
	cout << cnt;
}

