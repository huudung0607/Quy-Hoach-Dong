
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
int a[1000006];
int main()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	vector<int>v;
	for (int i = 0; i < n; i++) {
		auto it = lower_bound(v.begin(),v.end(), a[i]);
		if (it == v.end()) {
			v.push_back(a[i]);
		}
		else *it = a[i];
	}
	cout << v.size();
}

