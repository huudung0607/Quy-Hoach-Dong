
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
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	F[1] = 0;
	F[2] = abs(a[2] - a[1]);
	for (int i = 3; i <= n; i++) {
		F[i] = min(F[i - 1] + abs(a[i] - a[i - 1]), F[i - 2] + abs(a[i] - a[i - 2]));
	}
	cout << F[n];
}

