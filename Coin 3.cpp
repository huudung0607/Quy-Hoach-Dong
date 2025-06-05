
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
vector<int> F(1000006, 0);
const int mod = 1e9 + 7;
int main()
{
	int n, s;
	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	F[0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = a[i]; j <= s; j++) {
			F[j] += (F[j - a[i]]);
			F[j] %= mod;
		}
	}
	cout << F[s];
}

