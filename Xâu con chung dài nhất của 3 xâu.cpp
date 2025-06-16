
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
long long F[105][105][105];
int main()
{
	string x, y, z;
	cin >> x >> y >> z;
	for (int i = 1; i <= x.size(); i++) {
		for (int j = 1; j <= y.size(); j++) {
			for (int k = 1; k <= z.size(); k++) {
				if (x[i - 1] == y[j - 1] && y[j - 1] == z[k - 1]) {
					F[i][j][k] = F[i - 1][j - 1][k - 1] + 1;
				}
				else F[i][j][k] = max({ F[i][j][k],F[i - 1][j][k], F[i][j - 1][k],F[i][j][k - 1] });
			}
		}
	}
	cout << F[x.size()][y.size()][z.size()];
}

