#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	ll a,b,n,m;
	cin>>a>>b>>n>>m;
	ll mini=min(a,b);
	if(mini<m){
		cout<<"NO\n";
		return;
	}
	if((a+b)<(m+n)){
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
	
	
	
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}