
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
int a[500005];
long long F[500005];
int main()
{
	int n,m; cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	F[1] = 0;
	for (int i = 2; i <= n; i++) {
		long long tmp = LLONG_MAX;
		for (int k = 1; k <= m; k++) {
			if (i - k > 0) {
				tmp = min(tmp, F[i - k] + abs(a[i] - a[i - k]));
			}
		}
		F[i] = tmp;
	}
	cout << F[n];
}

