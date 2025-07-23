
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
long long dp[5005][5005];
int main() {
    int m1, m2, n;
    cin >> m1 >> m2 >> n;
    vector<int> v(n), w(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i] >> w[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = m1; j >= 0; --j) {
            for (int k = m2; k >= 0; --k) {
                if (j >= w[i]) {
                    dp[j][k] = max(dp[j][k], dp[j - w[i]][k] + v[i]);
                }
                if (k >= w[i]) {
                    dp[j][k] = max(dp[j][k], dp[j][k - w[i]] + v[i]);
                }
            }
        }
    }
    cout << dp[m1][m2];
}

