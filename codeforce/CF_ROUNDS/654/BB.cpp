#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll n,k;cin>>n>>k;
	ll ans;
	if(n <= k){
		ans=((n)*(n-1))/2;
		ans=ans+1LL;
		cout<<ans<<'\n';
	}
	else{
		ans=(k*(k+1))/2;
		cout<<ans<<'\n';
	}
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}