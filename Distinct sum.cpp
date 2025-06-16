
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
long long a[1005];
long long F[105][10005];
int main()
{
	int n; cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	F[0][0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= sum; j++) {
			F[i][j] = F[i - 1][j];
			if (j >= a[i]) {
				F[i][j] = max(F[i][j], F[i - 1][j - a[i]]);
			}

		}
	}
	for (int i = 0; i <= sum; i++) {
		if (F[n][i]) {
			cout << i << " ";
		}
	}
}

