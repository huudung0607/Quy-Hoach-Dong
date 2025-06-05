
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
vector<int> F(1000006, 1e9);
int main()
{
	int n, s;
	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	F[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = a[i]; j <= s;j++) {
			F[j] = min(F[j], F[j - a[i]] + 1);
		}
	}
	if (F[s] == 1e9) {
		cout << -1;
	}
	else cout << F[s];
}

