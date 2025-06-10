
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
bool cmp(pair<int, int> a, pair<int, int>b) {
	return a.second < b.second;
}
int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int x, y; cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end(),cmp);
	int cnt = 1;
	int prev = v[0].second;
	for (int i = 1; i < n; i++) {
		if (v[i].first > prev) {
			cnt++;
			prev = v[i].second;
		}
	}
	cout << cnt;
}

