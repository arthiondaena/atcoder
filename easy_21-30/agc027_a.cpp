#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
 
const ll MOD = 998244353;
 
int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  ll sum = 0;
  rep(i, n) {
    cin >> a[i];
    sum += a[i];
  }
  if (sum < x) {
    cout << n - 1 << endl;
    return 0;
  } else if (sum == x) {
    cout << n << endl;
    return 0;
  }
 
  sort(a.begin(), a.end());
  int ans = 0;
  rep(i, n) {
    if (x >= a[i]) {
      x -= a[i];
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}