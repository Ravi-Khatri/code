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
	int n;cin>>n;
	vi a(n);
	f(i,0,n-1)cin>>a[i];
	int i=0;
	while(i<n-1){
		// if(a[i]>0 && a[i+1]>0)
		// 	cout<<-a[i+1]<<" "<<a[i]<<" ";
		// else if(a[i]<0 && a[i+1]>0){
		// 	cout<<-a[i+1]<<" "<<a[i]<<" ";
		// }
		// else if(a[i]>0 && a[i+1]<0){
		// 	cout<<-a[i+1]<<" "<<a[i]<<' ';
		// }
		cout<<-a[i+1]<<" "<<a[i]<<" ";
		i+=2;
	}
	cout<<'\n';
}
int main()
{	Fast;
	int t;cin>>t;
	while(t--)
	solve();
}