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
 a.clear();
 cin >> n;
 ll sum = 0;
 for(ll i = 0; i < n; i++) {
   cin >> p;
   sum += p;
   a.pb(p);
 }
 ll c = 0;
 while(sum != n){
   ll k, nt, st;
   st = sum;
   k = n+1 - sum; 
   sum += k >= 0? k: 0;
   n++;
   c++;
 }
 cout << c << endl;
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