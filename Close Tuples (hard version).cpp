
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define INF 1e18
#define pr 998244353
#define endl "\n"
//#define ordered_set tree<long long int, null_type,less<long long int>, rb_tree_tag,tree_order_statistics_node_update>
ll power(ll x,ll y)
{
    if(y==0)return 1ll;
    if(y%2)return (x%MOD*power(x,y-1)%MOD)%MOD;
    else return power((x*x)%MOD,y/2)%MOD;
}
ll power1(ll x,ll y)
{
    if(y==0)return 1ll;
    if(y%2)return (x%pr*power1(x,y-1)%pr)%pr;
    else return power1((x*x)%pr,y/2)%pr;
}
ll fact[200005],inv[200005];
ll ncr(ll n,ll r)
{
    return (((fact[n]*inv[r])%MOD) * inv[n-r])%MOD;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
   
    fact[0]=inv[0]=1;
    for(ll i=1;i<200005;i++)
    {
        fact[i]=(i*fact[i-1])%MOD;
        inv[i]=power(fact[i],MOD-2);
    }
    while(t--)
    {   
        ll n,m,k;
        cin>>n>>m>>k;
        ll arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        map <ll,bool> mapp;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            
            int x=upper_bound(arr,arr+n,arr[i]+k)-arr;
            x--;
 
            x=(x-i+1);
            if(x>=m)
            {
                ans+=ncr(x-1,m-1);
                ans%=MOD;
            }
        }
        cout<<ans<<endl;
    }
    
}   
