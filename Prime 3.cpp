Cho số nguyên dương N, hãy tính tích các số nguyên tố trong đoạn từ 0 đến N. Khi N = 0 hoặc 1 thì đáp án là 0.
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

int prime[1000001];
void seive() {
	for (int i = 0; i <= 1000000; i++)
	{
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= sqrt(1000000); i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= 1000000; j += i)
			{
				prime[j] = 0;
			}
		}
	}
}
int res[1000006];
const int mod = 1e9 + 7;
int main()
{
	seive();
	long long ans = 1;
	for (int i = 1; i <= 1000000; i++) {
		if (prime[i]) {
			ans *= i;
			ans %= mod;
			res[i] = ans;
		}
		else res[i] = ans;
	}
	int t;
	cin >> t;
	while (t--) {
		int n; cin >> n;
		if (n == 0 || n == 1) {
			cout << 1 << endl;
		}
		else {
			cout << res[n] << endl;
		}
	}
}

