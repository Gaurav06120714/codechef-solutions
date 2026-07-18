#include <iostream>

using namespace std;

void solve() {
    long long N;
    cin >> N;
    if (N == 1) {
        cout << 1 << "\n";
    } else {
        long long ans = N * N - 3 * N + 3;
        cout << ans << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }