
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
int F[5005][5005];
int main()
{
	string s;
	cin >> s;
	int n = s.size();
	s = " " + s;
	for (int i = 1; i <= n; i++) {
		F[i][i] = 1;
	}
	int res = 1;
	for (int d = 2; d <= n; d++) {
		for (int i = 1; i <= n - d + 1; i++) {
			int j = i + d - 1;
			if (d == 2) {
				F[i][j] = (int)(s[i] == s[j]);
			}
			else {
				F[i][j] = (int)(s[i] == s[j]) && F[i + 1][j - 1];
			}
			if (F[i][j] == 1) {
				res = max(res, d);
			}
		}
	}
	cout << res;
}

