
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
long long a[10005], F1[10005], F2[10005];
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		F1[i] = a[i];
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j]) {
				F1[i] = max(F1[i], F1[j] + a[i]);
			}
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		F2[i] = a[i];
		for (int j = n - 1; j > i; j--) {
			if (a[i] > a[j]) {
				F2[i] = max(F2[i], F2[j] + a[i]);
			}
		}
	}
	long long res = 0;
	for (int i = 0; i < n; i++) {
		res = max(res, F1[i] + F2[i] - a[i]);
	}
	cout << res;
}

