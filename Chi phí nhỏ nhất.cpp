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
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 2; i <= n; i++) {
		F[i] = min(F[i - 1] + a[i - 1], F[i - 2] + a[i - 2]);
	}
	cout << F[n];
}


