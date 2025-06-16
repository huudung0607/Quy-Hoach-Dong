
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
long long F[10004];
int main()
{
	string s; cin >> s;
	int n = s.size();
	s = 'a' + s;
	long long ans = 0;
	for (int i = 1; i <= n; i++) {
		F[i] = F[i - 1] * 10 + (s[i] - '0') * i;
		ans += F[i];
	}
	cout << ans;
}

