#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxN = 405;
const int maxH = 40005;
struct Block {
    int h, a, c;
};
int K;
Block A[maxN];
bool dp[maxH];
void Enter() {
    cin >> K;
    for (int i = 1; i <= K; ++i) {
        cin >> A[i].h >> A[i].a >> A[i].c;
    }
}
bool cmp(Block a, Block b) {
    return a.a < b.a;  
}
void Solve() {
    memset(dp, false, sizeof(dp));
    dp[0] = true;
    sort(A + 1, A + 1 + K, cmp);
    for (int i = 1; i <= K; ++i) {
        int h = A[i].h, a = A[i].a, c = A[i].c;
        vector<int> cnt(maxH, 0);
        for (int j = 0; j <= a; ++j) {
            if (dp[j]) cnt[j] = 0;
            else if (j >= h && dp[j - h] && cnt[j - h] < c) {
                dp[j] = true;
                cnt[j] = cnt[j - h] + 1;
            }
        }
    }
    for (int i = maxH - 1; i >= 0; --i) {
        if (dp[i]) {
            cout << i;
            return;
        }
    }
}
int main() {
    Enter();
    Solve();
    return 0;
}
