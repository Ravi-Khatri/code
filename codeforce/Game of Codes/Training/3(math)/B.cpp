#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define pb push_back
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define fr(i,n,s) for(int i=(int)n;i>=s;--i)
#define all(v) v.begin(),v.end()
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n;cin>>n;
	ll x=1;
	if(n==1){
		cout<<1<<'\n';
		return;
	}
	ll ans=0;
	while(n>0){
		ll pow=1LL<<x;
		pow-=1LL;
		ll minus=(pow*(pow+1))/2;
		if(n>=minus){
			++ans;
			n-=minus;
		}
		else
			break;
		x+=1LL;
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}