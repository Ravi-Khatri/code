#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int ans=d;
	for(int i=1;i<=d;i++){
		if(i%k && i%l && i%m && i%n)
		--ans;		
	}
	cout<<ans<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
	//while(t--)
	solve();
}