#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define F first
#define S second
#define f(i,s,n) for(int i=(int)s;i<=(int)n;++i)
#define Fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
void solve()
{
	int n;cin>>n;
	vll a(n+1);
	map<int,int> vis;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
	}
	sort(a.begin(),a.end());
	int cur=1;
	for(int i=1;i<=n;i++){
		if(a[i]>=cur)++cur;
	}
	cout<<cur<<'\n';
}
int main()
{	Fast;
	//int t;cin>>t;
//	while(t--)
	solve();
}