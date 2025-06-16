
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
long long a[10005], F[10005];
int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	long long ans = 0;
	for (int i = 1; i <= n; i++) {
		long long best = 0;
		for (int j = 1; j < i; j++) {
			if (a[j] < a[i]) {
				best = max(best, F[j]);
			}
		}
		F[i] = best + a[i];
		ans = max(ans, F[i]);
	}
	cout << ans;
}

