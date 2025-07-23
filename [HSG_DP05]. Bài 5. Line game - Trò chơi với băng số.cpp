
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

int main() {
    int n; cin >> n;
    if (n <= 0) {
        cout << 0 << endl;
        return 0;
    }
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    int max_even = 0;
    int max_odd = a[1];
    for (int i = 2; i <= n; ++i) {
        int temp_even = max(max_even, max_odd - a[i]);
        int temp_odd = max(max_odd, max_even + a[i]);
        max_even = temp_even;
        max_odd = temp_odd;
    }
    cout << max_odd << endl;
}
