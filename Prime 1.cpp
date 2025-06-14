Cho số nguyên dương N, hãy đếm xem trong đoạn từ 0 tới N có bao nhiêu số nguyên tố.
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
int cnt[1000006];
int main()
{
	seive();
	int sum = 0;
	for (int i = 0; i <= 1000000; i++) {
		sum += prime[i];
		cnt[i] = sum;
	}
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		cout << cnt[n] << endl;
	}
}

