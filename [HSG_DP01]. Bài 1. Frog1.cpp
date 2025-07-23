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
long long F[500005];
long long a[500005];
int main()
{
	int n, k; cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	F[1] = 0;
	for (int i = 2; i <= n; i++) {
		long long tmp = LLONG_MAX;
		for (int j = 1; j <= k; j++) {
			if (i - j >= 1) {
				tmp = min(tmp, F[i - j] + abs(a[i] - a[i - j]));
			}
		}
		F[i] = tmp;
	}
	cout << F[n];
}
