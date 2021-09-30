#include <bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define tr(c,i) for(auto i = c.begin(); i != c.end(); i++)
#define output(x) for (auto a:x) cout<<a<<" ";cout<<endl;
#define loop2(i, a, n) for(long long int i = a; i<n; i++)
#define loop(i, n) for(long long int i = 0; i<n; i++)
#define present(c,x) (c.find(x) != c.end())
#define sz(a) int((a).size())
#define all(c) c.begin(), c.end()
using namespace std;
typedef long long int ll;
typedef vector<ll> vl;
typedef pair<ll, ll> pi;
typedef vector<pi> vp;
typedef vector<ll, pi> vt;

// custom object with custom comparision operator for sort()
struct P {
  int x, y;
  bool operator<(const P &p) {
    if (x != p.x) return x < p.x;
    else return y < p.y;
  }
};

ll gcd(ll a,ll b){ if(b == 0)  return a; return gcd(b,a%b);}

vl a;

void solve () {
  ll n, p;
  string s;
  cin >> n;
  cin >> s;
  // cout << n << endl;
  ll pref[n+1];
  pref[0] = s[0] == 'a'? 1: 0;
  for (ll i = 1; i < n; i++) {
    pref[i] = pref[i-1];
    if (s[i] == 'a') {
      pref[i]++;
    }
  }
  // output(pref);
  pi ans;
  ans.F = ans.S = -1;
  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < i; j++) {
      if (j > 0) {
        ll k = pref[i] - pref[j-1];
        // cout << k << " " << i << " " << j << endl;
        if (2*k == i-j+1) {
          ans.F = j+1, ans.S = i+1;
          break;
        }
      }
      else if (i+1 == 2 * pref[i]) {
          ans.F = 1, ans.S = i+1;
          break;
      }
    }
  }
  // cout << s<< endl;
  cout << ans.F << " " << ans.S << endl;
  return;

}

int main() { 
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  ll t;
  cin >> t;
  // t=1;
  while(t--) 
    solve();
}