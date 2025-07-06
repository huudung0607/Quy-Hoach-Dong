
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
bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first) return a.second > b.second;
	return a.first < b.first;
}
int main()
{
	int n; cin >> n;
	vector<pair<int, int>> a;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		a.push_back({ x,y });
	}
	sort(a.begin(), a.end(),cmp);
	// LIS 2 dp
	vector<int> v;
	for (int i = 0; i < n; i++) {
		auto it = lower_bound(v.begin(), v.end(), a[i].second);
		if (it == v.end()) {
			v.push_back(a[i].second);
		}
		else *it = a[i].second;
	}
	cout << v.size();
}

