
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
int a[100006];
int F[100006];
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
		for (int j = s; j >= a[i]; j--) {
			if (F[j - a[i]] == 1) {
				F[j] = 1;
			}
		}
	}
	cout << F[s];
}

