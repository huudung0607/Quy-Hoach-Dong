
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
long long a[500005];
long long F[500005];
int main()
{
	int n;
	cin >> n;
	map<long long, long long>mp;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		mp[a[i]]++;
	}
	long long maxval = *max_element(a, a + n);
	F[0] = 0;
	F[1] = 1 * mp[1];
	for (int i = 2; i <= maxval; i++) {
		F[i] = max(F[i - 1], F[i - 2] + i * mp[i]);
	}
	cout << F[maxval];
}

